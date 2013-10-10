/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set sw=2 ts=8 et tw=80 : */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

// HttpLog.h should generally be included first
#include "HttpLog.h"

#include "Http2Compression.h"

namespace mozilla {
namespace net {

Http2BaseCompressor::Http2BaseCompressor()
  : mHeaderTableSize(0)
  , mOutput(nullptr)
{
}

void
Http2BaseCompressor::AddHeaderTableElement(const nsACString &name,
                                           const nsACString &value)
{
  mHeaderTableSize += name.Length() + value.Length() + 32;
  mHeaderTable.AppendElement(nvPair(name, value));
}

void
Http2BaseCompressor::AddHeaderTableElement(const nsACString &name)
{
  AddHeaderTableElement(name, EmptyCString());
}

void
Http2BaseCompressor::ClearHeaderTable()
{
  mHeaderTable.Clear();
  mHeaderTableSize = 0;
  mReferenceSet.Clear();
}

void
Http2BaseCompressor::UpdateReferenceSet(int32_t delta) 
{
  if (!delta)
    return;

  for (int32_t i = mReferenceSet.Length() - 1; i >= 0; --i) {
    if ((static_cast<int32_t>(mReferenceSet[i]) + delta) < 0) {
      LOG3(("HTTP base compressor reference to index %u removed.\n",
            mReferenceSet[i]));
      mReferenceSet.RemoveElementAt(i);
    } else {
      LOG3(("HTTP base compressor reference to index %u changed to %d (%s)\n",
            mReferenceSet[i], mReferenceSet[i] + delta,
            mHeaderTable[mReferenceSet[i] + delta].mName.get()));
      mReferenceSet[i] = mReferenceSet[i] + delta;
    }
  }

  for (int32_t i = mAlternateReferenceSet.Length() - 1; i >= 0; --i) {
    if ((static_cast<int32_t>(mAlternateReferenceSet[i]) + delta) < 0) {
      LOG3(("HTTP base compressor new reference to index %u removed.\n",
            mAlternateReferenceSet[i]));
      mAlternateReferenceSet.RemoveElementAt(i);
    } else {
      LOG3(("HTTP base compressor new reference to index %u changed to %d (%s)\n",
            mAlternateReferenceSet[i], mAlternateReferenceSet[i] + delta,
            mHeaderTable[mAlternateReferenceSet[i] + delta].mName.get()));
      mAlternateReferenceSet[i] = mAlternateReferenceSet[i] + delta;
    }
  }
}

Http2Decompressor::Http2Decompressor()
{
  // Section A.2.. the default response header table
  AddHeaderTableElement(NS_LITERAL_CSTRING(":status"), NS_LITERAL_CSTRING("200"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("age"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("cache-control"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-length"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-type"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("date"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("etag"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("expires"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("last-modified"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("server"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("set-cookie"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("vary"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("via"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("access-control-allow-origin"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("accept-ranges"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("allow"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("connection"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-disposition"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-encoding"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-language"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-location"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-range"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("link"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("location"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("proxy-authenticate"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("refresh"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("retry-after"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("strict-transport-security"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("transfer-encoding"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("www-authenticate"));
}

nsresult
Http2Decompressor::DecodeHeaderBlock(const uint8_t *data, uint32_t datalen,
                                     nsACString &output)
{
  mAlternateReferenceSet.Clear();
  mOffset = 0;
  mData = data;
  mDataLen = datalen;
  mOutput = &output;
  mOutput->Truncate();
  mHeaderStatus.Truncate();
  mHeaderHost.Truncate();
  mHeaderScheme.Truncate();
  mHeaderPath.Truncate();
  mHeaderMethod.Truncate();

  nsresult rv = NS_OK;
  while (NS_SUCCEEDED(rv) && (mOffset < datalen)) {
    if (mData[mOffset] & 0x80) {
      rv = DoIndexed();
    } else if (!(mData[mOffset] & 0x40)) {
      rv = DoLiteralWithSubstitution();
    } else if (mData[mOffset] & 0x20) {
      rv = DoLiteralWithoutIndex();
    } else {
      rv = DoLiteralWithIncremental();
    }
  }

  // after processing the input the decompressor comapres the alternate
  // set to the inherited reference set and generates headers for
  // anything implicit in reference - alternate.

  uint32_t setLen = mReferenceSet.Length();
  for (uint32_t index = 0; index < setLen; ++index) {
    if (!mAlternateReferenceSet.Contains(mReferenceSet[index])) {
      LOG3(("HTTP decompressor carryover in reference set with index %u %s %s\n",
            mReferenceSet[index],
            mHeaderTable[mReferenceSet[index]].mName.get(),
            mHeaderTable[mReferenceSet[index]].mValue.get()));
      OutputHeader(mReferenceSet[index]);
    }
  }
  
  mAlternateReferenceSet.Clear();
  return rv;
}

nsresult
Http2Decompressor::DecodeInteger(uint32_t prefixLen, uint32_t &accum)
{
  accum = 0;

  if (prefixLen) {
    uint32_t mask = (1 << prefixLen) - 1;

    accum = mData[mOffset] & mask;
    ++mOffset;

    if (accum != mask) {
      // the simple case for small values
      return NS_OK;
    }
  }

  uint32_t factor = 1; // 128 ^ 0

  // we need a series of bytes. The high bit signifies if we need another one.
  // The first one is a a factor of 128 ^ 0, the next 128 ^1, the next 128 ^2, ..

  if (mOffset >= mDataLen)
    return NS_ERROR_ILLEGAL_VALUE;
  bool chainBit = mData[mOffset] & 0x80;
  accum += (mData[mOffset] & 0x7f) * factor;

  ++mOffset;
  factor = factor * 128;
  
  while (chainBit) {
    // really big offsets are just trawling for overflows
    if (accum >= 0x800000)
      return NS_ERROR_ILLEGAL_VALUE;

    if (mOffset >= mDataLen)
      return NS_ERROR_ILLEGAL_VALUE;
    chainBit = mData[mOffset] & 0x80;
    accum += (mData[mOffset] & 0x7f) * factor;
    ++mOffset;
    factor = factor * 128;
  }
  return NS_OK;
}

nsresult
Http2Decompressor::OutputHeader(nsACString &name, nsACString &value)
{
    // exclusions.. mostly from 8.1.2
  if (name.Equals(NS_LITERAL_CSTRING("connection")) ||
      name.Equals(NS_LITERAL_CSTRING("host")) ||
      name.Equals(NS_LITERAL_CSTRING("keep-alive")) ||
      name.Equals(NS_LITERAL_CSTRING("proxy-connection")) ||
      name.Equals(NS_LITERAL_CSTRING("te")) ||
      name.Equals(NS_LITERAL_CSTRING("transfer-encoding")) ||
      name.Equals(NS_LITERAL_CSTRING("upgrade")) ||
      name.Equals(("accept-encoding"))) {
    nsCString toLog(name);
    LOG3(("HTTP Decompressor illegal respones header found : %s",
          toLog.get()));
    return NS_ERROR_ILLEGAL_VALUE;
    }

  // Look for upper case characters in the name.
  for (char *cPtr = name.BeginWriting();
       cPtr && cPtr < name.EndWriting();
       ++cPtr) {
    if (*cPtr <= 'Z' && *cPtr >= 'A') {
      nsCString toLog(name);
      LOG3(("HTTP Decompressor upper case response header found. [%s]\n",
            toLog.get()));
      return NS_ERROR_ILLEGAL_VALUE;
    }
  }

  // Status comes first
  if (name.Equals(NS_LITERAL_CSTRING(":status"))) {
    nsAutoCString status(NS_LITERAL_CSTRING("HTTP/1.1 "));
    status.Append(value);
    status.Append(NS_LITERAL_CSTRING("\r\n"));
    mOutput->Insert(status, 0);
    mHeaderStatus = value;
  } else if (name.Equals(NS_LITERAL_CSTRING(":host"))) {
    mHeaderHost = value;
  } else if (name.Equals(NS_LITERAL_CSTRING(":scheme"))) {
    mHeaderScheme = value;
  } else if (name.Equals(NS_LITERAL_CSTRING(":path"))) {
    mHeaderPath = value;
  } else if (name.Equals(NS_LITERAL_CSTRING(":method"))) {
    mHeaderMethod = value;
  }

  // http/2 transport level headers shouldn't be gatewayed into http/1
  if(*(name.BeginWriting()) == ':') {
    return NS_OK;
  }

  mOutput->Append(name);
  mOutput->Append(NS_LITERAL_CSTRING(": "));
  mOutput->Append(value);
  mOutput->Append(NS_LITERAL_CSTRING("\r\n"));
  return NS_OK;
}

nsresult
Http2Decompressor::OutputHeader(uint32_t index)
{
  // bounds check
  if (mHeaderTable.Length() <= index)
    return NS_ERROR_ILLEGAL_VALUE;

  return OutputHeader(mHeaderTable[index].mName,
                      mHeaderTable[index].mValue);
}

nsresult
Http2Decompressor::CopyHeaderString(uint32_t index, nsACString &name)
{
  // bounds check
  if (mHeaderTable.Length() <= index)
    return NS_ERROR_ILLEGAL_VALUE;

  name = mHeaderTable[index].mName;
  return NS_OK;
}

nsresult
Http2Decompressor::CopyStringFromInput(uint32_t bytes, nsACString &val)
{
  if (mOffset + bytes > mDataLen)
    return NS_ERROR_ILLEGAL_VALUE;

  val.Assign((const char *)mData + mOffset, bytes);
  mOffset += bytes;
  return NS_OK;
}

nsresult
Http2Decompressor::DoIndexed()
{
  // this starts with a 1 bit pattern
  MOZ_ASSERT(mData[mOffset] & 0x80);
  
  // Indexed entries toggle the reference set
  // This is a 7 bit prefix

  uint32_t index;
  nsresult rv = DecodeInteger(7, index);
  if (NS_FAILED(rv))
    return rv;

  LOG3(("HTTP decompressor indexed entry %u\n", index));

  // Toggle this in the reference set..
  // if its not currently in the reference set then add it and
  // also emit it. If it is currently in the reference set then just
  // remove it from there.
  if (mReferenceSet.RemoveElement(index)) {
    mAlternateReferenceSet.RemoveElement(index);
    return NS_OK;
  }

  rv = OutputHeader(index);
  mReferenceSet.AppendElement(index);
  mAlternateReferenceSet.AppendElement(index);
  return rv;
}

nsresult
Http2Decompressor::DoLiteralInternal(nsACString &name, nsACString &value)
{
  // guts of doliteralwithoutindex and doliteralwithincremental
  MOZ_ASSERT(((mData[mOffset] & 0xE0) == 0x60) ||  // withoutindex
             ((mData[mOffset] & 0xE0) == 0x40));   // withincremental

  // first let's get the name
  uint32_t index;
  nsresult rv = DecodeInteger(5, index);
  if (NS_FAILED(rv))
    return rv;

  if (!index) {
    // name is embedded as a literal
    uint32_t nameLen;
    rv = DecodeInteger(0, nameLen);
    if (NS_SUCCEEDED(rv))
      rv = CopyStringFromInput(nameLen, name);
  } else {
    // name is from headertable
    rv = CopyHeaderString(index - 1, name);
  }
  if (NS_FAILED(rv))
    return rv;

  // now the value
  uint32_t valueLen;
  rv = DecodeInteger(0, valueLen);
  if (NS_SUCCEEDED(rv))
    rv = CopyStringFromInput(valueLen, value);
  if (NS_FAILED(rv))
    return rv;
  return NS_OK;
}

nsresult
Http2Decompressor::DoLiteralWithoutIndex()
{
  // this starts with 011 bit pattern
  MOZ_ASSERT((mData[mOffset] & 0xE0) == 0x60);

  // This is not indexed so there is no adjustment to the
  // persistent reference set
  nsAutoCString name, value;
  nsresult rv = DoLiteralInternal(name, value);

  LOG3(("HTTP decompressor literal without index %s %s\n",
        name.get(), value.get()));

  // Output the header now because we don't keep void
  // indicies in the reference set
  if (NS_SUCCEEDED(rv))
    rv = OutputHeader(name, value);
  return rv;
}

nsresult
Http2Decompressor::DoLiteralWithIncremental()
{
  // this starts with 010 bit pattern
  MOZ_ASSERT((mData[mOffset] & 0xE0) == 0x40);

  nsAutoCString name, value;
  nsresult rv = DoLiteralInternal(name, value);
  if (NS_SUCCEEDED(rv))
    rv = OutputHeader(name, value);
  if (NS_FAILED(rv))
    return rv;

  uint32_t room = nvPair(name, value).Size();
  if (room > kMaxBuffer) { // 3.2.4
    ClearHeaderTable();
    LOG3(("HTTP decompressor literal with index not referenced due to size %u %s\n",
          room, name.get()));
    return NS_OK;
  }
  
  // make room in the header table
  uint32_t removedCount = 0;
  while (mHeaderTable.Length() && ((mHeaderTableSize + room) > kMaxBuffer)) { // 3.2.4
    mHeaderTableSize -= mHeaderTable[0].Size();
    mHeaderTable.RemoveElementAt(0);
    ++removedCount;
    LOG3(("HTTP decompressor header table index 0 %s removed for size.\n", name.get()));
  }

  // adjust references to header table
  UpdateReferenceSet(-1 * removedCount);

  // Incremental Indexing implicitly adds a row to the header table.
  // It also adds the new row to the Reference Set
  uint32_t index = mHeaderTable.Length();
  AddHeaderTableElement(name, value);
  mReferenceSet.AppendElement(index);
  mAlternateReferenceSet.AppendElement(index);

  LOG3(("HTTP decompressor literal with index %u %s %s\n",
        index, name.get(), value.get()));

  return NS_OK;
}

nsresult
Http2Decompressor::DoLiteralWithSubstitution()
{
  // this starts with 00 bit pattern
  MOZ_ASSERT((mData[mOffset] & 0xC0) == 0x00);

  nsAutoCString name, value;
  uint32_t index, substitutionIndex;

  // first let's get the name
  nsresult rv = DecodeInteger(6, index);
  if (NS_FAILED(rv))
    return rv;

  if (!index) {
    // name is embedded as a literal
    uint32_t nameLen;
    rv = DecodeInteger(0, nameLen);
    if (NS_SUCCEEDED(rv))
      rv = CopyStringFromInput(nameLen, name);
  } else {
    // name is from headertable
    rv = CopyHeaderString(index - 1, name);
  }

  if (NS_FAILED(rv))
    return rv;

  // now the substitution index
  rv = DecodeInteger(0, substitutionIndex);
  if (NS_FAILED(rv))
    return rv;

  // now the value
  uint32_t valueLen;
  rv = DecodeInteger(0, valueLen);
  if (NS_SUCCEEDED(rv))
    rv = CopyStringFromInput(valueLen, value);

  if (NS_FAILED(rv))
    return rv;

  rv = OutputHeader(name, value);
  if (NS_FAILED(rv))
    return rv;

  uint32_t newSize = nvPair(name, value).Size();
  if (newSize > kMaxBuffer) { // 3.2.4
    ClearHeaderTable();
    LOG3(("HTTP decompressor substitution size %u caused clear header table %s\n",
          newSize, name.get()));
    return NS_OK;
  }

  uint32_t oldSize = mHeaderTable[substitutionIndex].Size();
  
  // make room in the header table
  uint32_t removedCount = 0;
  while (mHeaderTable.Length() && ((mHeaderTableSize + newSize - oldSize) > kMaxBuffer)) { // 3.2.4
    mHeaderTableSize -= mHeaderTable[0].Size();
    mHeaderTable.RemoveElementAt(0);
    if (removedCount == substitutionIndex)
      oldSize = 0;
    ++removedCount;
  }

  // adjust references to header table
  UpdateReferenceSet(-1 * removedCount);
  
  if (removedCount > substitutionIndex) {
    substitutionIndex = 0;
    mHeaderTable.InsertElementAt(0, nvPair(name, value));
    mHeaderTableSize += newSize;
    UpdateReferenceSet(+1);
  } else {
    substitutionIndex -= removedCount;
    mHeaderTable[substitutionIndex] = nvPair(name, value);
    mHeaderTableSize -= oldSize;
    mHeaderTableSize += newSize;
  }

  if (!mReferenceSet.Contains(substitutionIndex))
    mReferenceSet.AppendElement(substitutionIndex);
  if (!mAlternateReferenceSet.Contains(substitutionIndex))
    mAlternateReferenceSet.AppendElement(substitutionIndex);

  LOG3(("HTTP decompressor substitution with index %u %s %s\n",
        substitutionIndex, name.get(), value.get()));
  return NS_OK;
}

/////////////////////////////////////////////////////////////////

Http2Compressor::Http2Compressor()
  : mParsedContentLength(-1)
{
  AddHeaderTableElement(NS_LITERAL_CSTRING(":scheme"), NS_LITERAL_CSTRING("http"));
  AddHeaderTableElement(NS_LITERAL_CSTRING(":scheme"), NS_LITERAL_CSTRING("https"));
  AddHeaderTableElement(NS_LITERAL_CSTRING(":host"));
  AddHeaderTableElement(NS_LITERAL_CSTRING(":path"), NS_LITERAL_CSTRING("/"));
  AddHeaderTableElement(NS_LITERAL_CSTRING(":method"), NS_LITERAL_CSTRING("GET"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("accept"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("accept-charset"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("accept-encoding"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("accept-language"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("cookie"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("if-modified-since"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("user-agent"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("referer"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("authorization"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("allow"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("cache-control"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("connection"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-length"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("content-type"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("date"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("expect"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("from"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("if-match"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("if-none-match"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("if-range"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("if-unmodified-since"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("max-forwards"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("proxy-authorization"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("range"));
  AddHeaderTableElement(NS_LITERAL_CSTRING("via"));
}

nsresult
Http2Compressor::EncodeHeaderBlock(const nsCString &nvInput,
                                   const nsACString &method, const nsACString &path,
                                   const nsACString &host, const nsACString &scheme,
                                   nsACString &output)
{
  mAlternateReferenceSet.Clear();
  mImpliedReferenceSet.Clear();
  mOutput = &output;
  output.SetCapacity(1024);
  output.Truncate();
  mParsedContentLength = -1;

  // colon headers first
  ProcessHeader(nvPair(NS_LITERAL_CSTRING(":method"), method));
  ProcessHeader(nvPair(NS_LITERAL_CSTRING(":path"), path));
  ProcessHeader(nvPair(NS_LITERAL_CSTRING(":host"), host));
  ProcessHeader(nvPair(NS_LITERAL_CSTRING(":scheme"), scheme));

  // now the non colon headers
  const char *beginBuffer = nvInput.BeginReading();

  int32_t crlfIndex = nvInput.Find("\r\n");
  while (true) {
    int32_t startIndex = crlfIndex + 2;

    crlfIndex = nvInput.Find("\r\n", false, startIndex);
    if (crlfIndex == -1)
      break;

    int32_t colonIndex = nvInput.Find(":", false, startIndex,
                                      crlfIndex - startIndex);
    if (colonIndex == -1)
      break;

    nsDependentCSubstring name = Substring(beginBuffer + startIndex,
                                           beginBuffer + colonIndex);
    // all header names are lower case in http/2
    ToLowerCase(name);

    // exclusions.. mostly from 8.1.2
    if (name.Equals("connection") ||
        name.Equals("host") ||
        name.Equals("keep-alive") ||
        name.Equals("proxy-connection") ||
        name.Equals("te") ||
        name.Equals("transfer-encoding") ||
        name.Equals("upgrade") ||
        name.Equals("accept-encoding")) {
      continue;
    }

    int32_t valueIndex = colonIndex + 1;
    while (valueIndex < crlfIndex && beginBuffer[valueIndex] == ' ')
      ++valueIndex;

    nsDependentCSubstring value = Substring(beginBuffer + valueIndex,
                                            beginBuffer + crlfIndex);
    
    if (name.Equals("content-length")) {
      int64_t len;
      nsCString tmp(value);
      if (nsHttp::ParseInt64(tmp.get(), nullptr, &len))
        mParsedContentLength = len;
    }

    ProcessHeader(nvPair(name, value));
  }

  // iterate mreference set and if !alternate.contains(old[i])
  // toggle off
  uint32_t setLen = mReferenceSet.Length();
  for (uint32_t index = 0; index < setLen; ++index) {
    if (!mAlternateReferenceSet.Contains(mReferenceSet[index])) {
      DoOutput(kToggleOff, mHeaderTable[mReferenceSet[index]],
               mReferenceSet[index]);
    }
  }

  mReferenceSet = mAlternateReferenceSet;
  mAlternateReferenceSet.Clear();
  mImpliedReferenceSet.Clear();
  mOutput = nullptr;
  return NS_OK;
}

void
Http2Compressor::DoOutput(Http2Compressor::outputCode code,
                          const class nvPair &pair, uint32_t index)
{
  // start Byte needs to be calculated from the offset after
  // the opcode has been written out in case the output stream
  // buffer gets resized/relocated
  uint32_t offset = mOutput->Length();
  uint8_t *startByte;

  switch (code) {
  case kPlainLiteral:
    LOG3(("HTTP compressor %p noindex literal with name reference %u %s: %s\n",
          this, index, pair.mName.get(), pair.mValue.get()));

    EncodeInteger(5, index); // 011 3 bit prefix
    startByte = (unsigned char *)mOutput->BeginWriting() + offset;
    *startByte = (*startByte & 0x1f) | 0x60;
        
    if (!index) {
      EncodeInteger(0, pair.mName.Length());
      mOutput->Append(pair.mName);
    }
    
    EncodeInteger(0, pair.mValue.Length());
    mOutput->Append(pair.mValue);
    break;

  case kIndexedLiteral:
    LOG3(("HTTP compressor %p literal with name reference %u %s: %s\n",
          this, index, pair.mName.get(), pair.mValue.get()));

    EncodeInteger(5, index); // 010 3 bit prefix
    startByte = (unsigned char *)mOutput->BeginWriting() + offset;
    *startByte = (*startByte & 0x1f) | 0x40;
        
    if (!index) {
      EncodeInteger(0, pair.mName.Length());
      mOutput->Append(pair.mName);
    }
    
    EncodeInteger(0, pair.mValue.Length());
    mOutput->Append(pair.mValue);
    break;

  case kToggleOff:
  case kToggleOn:
    LOG3(("HTTP compressor %p toggle %s index %u %s\n",
          this, (code == kToggleOff) ? "off" : "on",
          index, pair.mName.get()));
    EncodeInteger(7, index);
    startByte = (unsigned char *)mOutput->BeginWriting() + offset;
    *startByte = *startByte | 0x80; // 1 1 bit prefix  
    break;
    
  case kNop:
    LOG3(("HTTP compressor %p implied in reference set index %u %s\n",
          this, index, pair.mName.get()));
    break;
  }
}

// writes the encoded integer onto the output
void
Http2Compressor::EncodeInteger(uint32_t prefixLen, uint32_t val)
{
  uint32_t mask = (1 << prefixLen) - 1;
  uint8_t tmp;

  if (val < mask) {
    // 1 byte encoding!
    tmp = val;
    mOutput->Append((char *)&tmp, 1);
    return;
  }

  if (mask) {
    val -= mask;
    tmp = mask;
    mOutput->Append((char *)&tmp, 1);
  }
  
  uint32_t q, r;
  do {
    q = val / 128;
    r = val % 128;
    tmp = r;
    if (q)
      tmp |= 0x80; // chain bit
    val = q;
    mOutput->Append((char *)&tmp, 1);
  } while (q);
}

void
Http2Compressor::UpdateReferenceSet(int32_t delta)
{
  if (!delta)
    return;

  Http2BaseCompressor::UpdateReferenceSet(delta);

  for (int32_t i = mImpliedReferenceSet.Length() - 1; i >= 0; --i) {
    if ((static_cast<int32_t>(mImpliedReferenceSet[i]) + delta) < 0) {
      LOG3(("HTTP base compressor implied reference to index %u removed.\n",
            mImpliedReferenceSet[i]));
      mImpliedReferenceSet.RemoveElementAt(i);
    } else {
      LOG3(("HTTP base compressor implied reference to index %u changed to %d (%s)\n",
            mImpliedReferenceSet[i], mImpliedReferenceSet[i] + delta,
            mHeaderTable[mImpliedReferenceSet[i] + delta].mName.get()));
      mImpliedReferenceSet[i] = mImpliedReferenceSet[i] + delta;
    }
  }
}

void
Http2Compressor::MakeRoom(uint32_t amount)
{
  // make room in the header table
  uint32_t removedCount = 0;
  while (mHeaderTable.Length() && ((mHeaderTableSize + amount) > kMaxBuffer)) { // 3.2.4

    // if there is a reference to removedCount (~0) in the implied reference set we need,
    // to toggle it off/on so that the implied reference is not lost when the
    // table is trimmed
    if (mImpliedReferenceSet.Contains(removedCount) ) {
      LOG3(("HTTP compressor header table index %u %s about to be "
            "removed for size but has an implied reference. Will Toggle.\n",
            removedCount, mHeaderTable[0].mName.get()));

      DoOutput(kToggleOff, mHeaderTable[0], removedCount);
      DoOutput(kToggleOn, mHeaderTable[0], removedCount);
    }

    LOG3(("HTTP compressor header table index %u [really 0] %s removed for size.\n",
          removedCount, mHeaderTable[0].mName.get()));
    mHeaderTableSize -= mHeaderTable[0].Size();
    mHeaderTable.RemoveElementAt(0);
    ++removedCount;
  }

  // adjust references to header table
  UpdateReferenceSet(-1 * removedCount);
}

void
Http2Compressor::ProcessHeader(const nvPair inputPair)
{
  uint32_t newSize = inputPair.Size();
  uint32_t headerTableSize = mHeaderTable.Length();
  uint32_t matchedIndex;
  uint32_t nameReference = 0;
  bool match = false;
  
  for (uint32_t index = 0; index < headerTableSize; ++index) {
    if (mHeaderTable[index].mName.Equals(inputPair.mName)) {
      nameReference = index + 1;
      if (mHeaderTable[index].mValue.Equals(inputPair.mValue)) {
        match = true;
        matchedIndex = index;
        break;
      }
    }
  }

  // We need to emit a new literal
  if (!match) {
    if ((newSize > (kMaxBuffer / 2)) || (kMaxBuffer < 128)) {
      DoOutput(kPlainLiteral, inputPair, nameReference);
      return;
    }

    // make sure to makeroom() first so that any implied items
    // get preserved.
    MakeRoom(newSize);
    DoOutput(kIndexedLiteral, inputPair, nameReference);

    // MakeRoom() may have changed header table length. recheck it.
    headerTableSize = mHeaderTable.Length();
    AddHeaderTableElement(inputPair.mName, inputPair.mValue);
    LOG3(("HTTP compressor %p new literal placed at index %u\n",
          this, headerTableSize));
    mAlternateReferenceSet.AppendElement(headerTableSize);
    return;
  }

  // It is in the reference set. just check to see if it is
  // a duplicate for output purposes
  if (mReferenceSet.Contains(matchedIndex)) {
    if (mAlternateReferenceSet.Contains(matchedIndex)) {
      DoOutput(kToggleOff, inputPair, matchedIndex);
      DoOutput(kToggleOn, inputPair, matchedIndex);
    } else {
      DoOutput(kNop, inputPair, matchedIndex);
      if (!mImpliedReferenceSet.Contains(matchedIndex))
        mImpliedReferenceSet.AppendElement(matchedIndex);
      mAlternateReferenceSet.AppendElement(matchedIndex);
    }
    return;
  }

  // emit an index to add to reference set
  DoOutput(kToggleOn, inputPair, matchedIndex);
  mAlternateReferenceSet.AppendElement(matchedIndex);
  return;
}

} // namespace mozilla::net
} // namespace mozilla
