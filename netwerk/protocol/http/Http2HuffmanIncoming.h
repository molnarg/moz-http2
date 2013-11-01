#ifndef mozilla__net__Http2HuffmanIncoming_h
#define mozilla__net__Http2HuffmanIncoming_h

namespace mozilla {
namespace net {

struct HuffmanIncomingTable;

struct HuffmanIncomingEntry {
  uint8_t mPrefixLen;
  uint16_t mValue;
  HuffmanIncomingTable *mPtr;
};

struct HuffmanIncomingTable {
  uint8_t mPrefixLen;
  HuffmanIncomingEntry *mEntries;
};

static HuffmanIncomingEntry HuffmanIncomingEntries246[] = {
  { .mPrefixLen = 1, .mValue = 37, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 40, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming246 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries246
};

static HuffmanIncomingEntry HuffmanIncomingEntries247[] = {
  { .mPrefixLen = 1, .mValue = 41, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 59, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming247 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries247
};

static HuffmanIncomingEntry HuffmanIncomingEntries248[] = {
  { .mPrefixLen = 1, .mValue = 72, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 76, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming248 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries248
};

static HuffmanIncomingEntry HuffmanIncomingEntries249[] = {
  { .mPrefixLen = 1, .mValue = 80, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 82, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming249 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries249
};

static HuffmanIncomingEntry HuffmanIncomingEntries250[] = {
  { .mPrefixLen = 1, .mValue = 85, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 86, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming250 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries250
};

static HuffmanIncomingEntry HuffmanIncomingEntries251[] = {
  { .mPrefixLen = 1, .mValue = 89, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 95, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming251 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries251
};

static HuffmanIncomingEntry HuffmanIncomingEntries252[] = {
  { .mPrefixLen = 1, .mValue = 106, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 107, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming252 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries252
};

static HuffmanIncomingEntry HuffmanIncomingEntries253[] = {
  { .mPrefixLen = 1, .mValue = 113, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 122, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming253 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries253
};

static HuffmanIncomingEntry HuffmanIncomingEntries254[] = {
  { .mPrefixLen = 2, .mValue = 38, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 75, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 81, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 88, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming254 = {
  .mPrefixLen = 2,
  .mEntries = HuffmanIncomingEntries254
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255222[] = {
  { .mPrefixLen = 1, .mValue = 0, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 1, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255222 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255222
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255223[] = {
  { .mPrefixLen = 1, .mValue = 2, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 3, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255223 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255223
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255224[] = {
  { .mPrefixLen = 1, .mValue = 4, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 5, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255224 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255224
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255225[] = {
  { .mPrefixLen = 1, .mValue = 6, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 7, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255225 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255225
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255226[] = {
  { .mPrefixLen = 1, .mValue = 8, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 9, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255226 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255226
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255227[] = {
  { .mPrefixLen = 1, .mValue = 10, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 11, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255227 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255227
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255228[] = {
  { .mPrefixLen = 1, .mValue = 12, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 13, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255228 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255228
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255229[] = {
  { .mPrefixLen = 1, .mValue = 14, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 15, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255229 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255229
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255230[] = {
  { .mPrefixLen = 1, .mValue = 16, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 17, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255230 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255230
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255231[] = {
  { .mPrefixLen = 1, .mValue = 18, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 19, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255231 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255231
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255232[] = {
  { .mPrefixLen = 1, .mValue = 20, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 21, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255232 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255232
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255233[] = {
  { .mPrefixLen = 1, .mValue = 22, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 23, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255233 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255233
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255234[] = {
  { .mPrefixLen = 1, .mValue = 24, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 25, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255234 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255234
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255235[] = {
  { .mPrefixLen = 1, .mValue = 26, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 27, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255235 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255235
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255236[] = {
  { .mPrefixLen = 1, .mValue = 28, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 29, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255236 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255236
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255237[] = {
  { .mPrefixLen = 1, .mValue = 30, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 31, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255237 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255237
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255238[] = {
  { .mPrefixLen = 1, .mValue = 127, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 128, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255238 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255238
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255239[] = {
  { .mPrefixLen = 1, .mValue = 129, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 130, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255239 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255239
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255240[] = {
  { .mPrefixLen = 1, .mValue = 131, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 132, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255240 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255240
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255241[] = {
  { .mPrefixLen = 1, .mValue = 133, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 134, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255241 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255241
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255242[] = {
  { .mPrefixLen = 1, .mValue = 135, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 136, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255242 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255242
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255243[] = {
  { .mPrefixLen = 1, .mValue = 137, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 138, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255243 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255243
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255244[] = {
  { .mPrefixLen = 1, .mValue = 139, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 140, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255244 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255244
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255245[] = {
  { .mPrefixLen = 1, .mValue = 141, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 142, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255245 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255245
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255246[] = {
  { .mPrefixLen = 1, .mValue = 143, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 144, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255246 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255246
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255247[] = {
  { .mPrefixLen = 1, .mValue = 145, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 146, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255247 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255247
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255248[] = {
  { .mPrefixLen = 1, .mValue = 147, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 148, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255248 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255248
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255249[] = {
  { .mPrefixLen = 1, .mValue = 149, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 150, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255249 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255249
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255250[] = {
  { .mPrefixLen = 1, .mValue = 151, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 152, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255250 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255250
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255251[] = {
  { .mPrefixLen = 1, .mValue = 153, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 154, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255251 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255251
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255252[] = {
  { .mPrefixLen = 1, .mValue = 155, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 156, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255252 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255252
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255253[] = {
  { .mPrefixLen = 1, .mValue = 157, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 158, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255253 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255253
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255254[] = {
  { .mPrefixLen = 1, .mValue = 159, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 160, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255254 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255254
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255255[] = {
  { .mPrefixLen = 1, .mValue = 161, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 162, .mPtr = nullptr },
};

static HuffmanIncomingTable HuffmanIncoming255255255 = {
  .mPrefixLen = 1,
  .mEntries = HuffmanIncomingEntries255255255
};

static HuffmanIncomingEntry HuffmanIncomingEntries255255[] = {
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 1, .mValue = 96, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 163, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 164, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 165, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 166, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 167, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 168, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 169, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 170, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 171, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 172, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 173, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 174, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 175, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 176, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 177, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 178, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 179, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 180, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 181, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 182, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 183, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 184, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 185, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 186, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 187, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 188, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 189, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 190, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 191, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 192, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 193, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 194, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 195, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 196, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 197, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 198, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 199, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 200, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 201, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 202, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 203, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 204, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 205, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 206, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 207, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 208, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 209, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 210, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 211, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 212, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 213, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 214, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 215, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 216, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 217, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 218, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 219, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 220, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 221, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 222, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 223, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 224, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 225, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 226, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 227, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 228, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 229, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 230, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 231, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 232, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 233, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 234, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 235, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 236, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 237, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 238, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 239, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 240, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 241, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 242, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 243, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 244, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 245, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 246, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 247, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 248, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 249, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 250, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 251, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 252, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 253, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 254, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 255, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 256, .mPtr = nullptr },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255222 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255223 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255224 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255225 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255226 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255227 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255228 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255229 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255230 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255231 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255232 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255233 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255234 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255235 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255236 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255237 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255238 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255239 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255240 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255241 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255242 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255243 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255244 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255245 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255246 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255247 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255248 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255249 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255250 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255251 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255252 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255253 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255254 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255255 }
};

static HuffmanIncomingTable HuffmanIncoming255255 = {
  .mPrefixLen = 8,
  .mEntries = HuffmanIncomingEntries255255
};

static HuffmanIncomingEntry HuffmanIncomingEntries255[] = {
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 2, .mValue = 90, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 43, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 91, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 3, .mValue = 93, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 33, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 42, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 63, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 35, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 39, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 62, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 92, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 36, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 36, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 36, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 36, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 124, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 124, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 124, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 124, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 94, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 94, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 60, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 64, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 123, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 125, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 126, .mPtr = nullptr },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255255 }
};

static HuffmanIncomingTable HuffmanIncoming255 = {
  .mPrefixLen = 8,
  .mEntries = HuffmanIncomingEntries255
};

static HuffmanIncomingEntry HuffmanIncomingEntriesRoot[] = {
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 32, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 48, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 49, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 4, .mValue = 50, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 51, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 52, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 53, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 56, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 57, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 58, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 84, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 97, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 5, .mValue = 101, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 44, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 44, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 44, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 44, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 45, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 45, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 45, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 45, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 46, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 46, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 46, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 46, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 54, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 54, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 54, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 54, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 55, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 55, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 55, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 55, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 71, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 71, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 71, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 71, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 77, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 77, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 77, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 77, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 83, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 83, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 83, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 83, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 99, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 99, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 99, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 99, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 100, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 100, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 100, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 100, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 105, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 105, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 105, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 105, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 109, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 109, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 109, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 109, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 110, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 110, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 110, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 110, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 111, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 111, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 111, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 111, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 112, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 112, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 112, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 112, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 114, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 114, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 114, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 114, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 115, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 115, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 115, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 115, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 116, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 116, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 116, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 116, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 117, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 117, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 117, .mPtr = nullptr },
  { .mPrefixLen = 6, .mValue = 117, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 34, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 34, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 47, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 47, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 61, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 61, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 65, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 65, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 98, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 98, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 102, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 102, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 103, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 103, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 104, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 104, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 108, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 108, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 118, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 118, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 120, .mPtr = nullptr },
  { .mPrefixLen = 7, .mValue = 120, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 66, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 67, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 68, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 69, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 70, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 73, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 74, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 78, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 79, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 87, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 119, .mPtr = nullptr },
  { .mPrefixLen = 8, .mValue = 121, .mPtr = nullptr },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming246 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming247 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming248 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming249 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming250 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming251 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming252 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming253 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming254 },
  { .mPrefixLen = 0, .mValue = 0, .mPtr = &HuffmanIncoming255 }
};

static HuffmanIncomingTable HuffmanIncomingRoot = {
  .mPrefixLen = 8,
  .mEntries = HuffmanIncomingEntriesRoot
};

} // namespace net
} // namespace mozilla

#endif // mozilla__net__Http2HuffmanIncoming_h
