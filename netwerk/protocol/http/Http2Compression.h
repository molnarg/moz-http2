/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_net_Http2Compression_Internal_h
#define mozilla_net_Http2Compression_Internal_h

// HPACK
// tools.ietf.org/html/draft-ietf-httpbis-header-compression-02 

#include "mozilla/Attributes.h"
#include "nsDeque.h"
#include "nsString.h"

namespace mozilla {
namespace net {

class nvPair
{
public:
nvPair(const nsACString &name, const nsACString &value)
  : mName(name)
  , mValue(value)
  { }

  uint32_t Size() const { return mName.Length() + mValue.Length() + 32; }

  nsCString mName;
  nsCString mValue;
};

class nvFIFO
{
public:
  nvFIFO();
  ~nvFIFO();
  void AddElement(const nsCString &name, const nsCString &value);
  void AddElement(const nsCString &name);
  void RemoveElement();
  void AddElement0(const nsCString &name, const nsCString &value);
  void ChangeElement(int index, const nsCString &name, const nsCString &value);
  uint32_t ByteCount() const;
  uint32_t Length() const;
  void Clear();
  const nvPair *operator[] (int32_t index) const;
  
private:
  uint32_t mByteCount;
  nsDeque  mTable;
};

class Http2BaseCompressor
{
public:
  Http2BaseCompressor();
  virtual ~Http2BaseCompressor() { };
  
protected:
  // this will become a HTTP/2 SETTINGS value in a future draft
  const static uint32_t kMaxBuffer = 4096;

  virtual void ClearHeaderTable();
  virtual void UpdateReferenceSet(int32_t delta);
 
  nsAutoTArray<uint32_t, 64> mReferenceSet; // list of indicies

  // the alternate set is used to track the emitted headers when
  // processing input for a header set. The input to the compressor
  // is a series of nvpairs, the input to the decompressor is the
  // series of op codes that make up the header block.
  //
  // after processing the input the compressor compares the alternate
  // set to the inherited reference set and generates indicies to
  // toggle off any members of alternate - inherited. the alternate
  // then becomes the inherited set for the next header set.
  //
  // after processing the input the decompressor comapres the alternate
  // set to the inherited reference set and generates headers for
  // anything implicit in reference - alternate.
  nsAutoTArray<uint32_t, 64> mAlternateReferenceSet; // list of indicies

  nsACString *mOutput;
  nvFIFO mHeaderTable;
};

class Http2Decompressor MOZ_FINAL : public Http2BaseCompressor
{
public:
  Http2Decompressor();
  virtual ~Http2Decompressor() { } ;

  // NS_OK: Produces the working set of HTTP/1 formatted headers
  nsresult DecodeHeaderBlock(const uint8_t *data, uint32_t datalen,
                             nsACString &output);

  void GetStatus(nsACString &hdr) { hdr = mHeaderStatus; }
  void GetHost(nsACString &hdr) { hdr = mHeaderHost; }
  void GetScheme(nsACString &hdr) { hdr = mHeaderScheme; }
  void GetPath(nsACString &hdr) { hdr = mHeaderPath; }
  void GetMethod(nsACString &hdr) { hdr = mHeaderMethod; }
  

private:
  nsresult DoIndexed();
  nsresult DoLiteralWithoutIndex();
  nsresult DoLiteralWithIncremental();
  nsresult DoLiteralWithSubstitution();
  nsresult DoLiteralInternal(nsACString &, nsACString &);

  nsresult DecodeInteger(uint32_t prefixLen, uint32_t &result);
  nsresult OutputHeader(uint32_t index);
  nsresult OutputHeader(const nsACString &name, const nsACString &value);

  nsresult CopyHeaderString(uint32_t index, nsACString &name);
  nsresult CopyStringFromInput(uint32_t index, nsACString &val);

  nsCString mHeaderStatus;
  nsCString mHeaderHost;
  nsCString mHeaderScheme;
  nsCString mHeaderPath;
  nsCString mHeaderMethod;

  // state variables when DecodeBlock() is on the stack
  uint32_t mOffset;
  const uint8_t *mData;
  uint32_t mDataLen;
};


class Http2Compressor MOZ_FINAL : public Http2BaseCompressor
{
public:
  Http2Compressor();
  virtual ~Http2Compressor() { }

  // HTTP/1 formatted header block as input - HTTP/2 formatted
  // header block as output
  nsresult EncodeHeaderBlock(const nsCString &nvInput,
                             const nsACString &method, const nsACString &path,
                             const nsACString &host, const nsACString &scheme,
                             nsACString &output);

  int64_t GetParsedContentLength() { return mParsedContentLength; } // -1 on not found

protected:
  virtual void ClearHeaderTable() MOZ_OVERRIDE;
  virtual void UpdateReferenceSet(int32_t delta) MOZ_OVERRIDE;

private:
  enum outputCode {
    kPlainLiteral,
    kIndexedLiteral,
    kToggleOff,
    kToggleOn,
    kNop
  };

  void DoOutput(Http2Compressor::outputCode code,
                const class nvPair *pair, uint32_t index);
  void EncodeInteger(uint32_t prefixLen, uint32_t val);
  void ProcessHeader(const nvPair inputPair);
  void MakeRoom(uint32_t amount);

  int64_t mParsedContentLength;

  nsAutoTArray<uint32_t, 64> mImpliedReferenceSet;
};

} // namespace mozilla::net
} // namespace mozilla

#endif // mozilla_net_Http2Compression_Internal_h

