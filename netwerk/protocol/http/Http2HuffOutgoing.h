#ifndef mozilla__net__Http2HuffOutgoing_h
#define mozilla__net__Http2HuffOutging_h

namespace mozilla {
namespace net {

struct huff_outgoing_entry {
  uint8_t length;
  uint32_t value;
};

static huff_outgoing_entry huff_outgoing[] = {
  { .length = 27, .value = 0x07ffffba },
  { .length = 27, .value = 0x07ffffbb },
  { .length = 27, .value = 0x07ffffbc },
  { .length = 27, .value = 0x07ffffbd },
  { .length = 27, .value = 0x07ffffbe },
  { .length = 27, .value = 0x07ffffbf },
  { .length = 27, .value = 0x07ffffc0 },
  { .length = 27, .value = 0x07ffffc1 },
  { .length = 27, .value = 0x07ffffc2 },
  { .length = 27, .value = 0x07ffffc3 },
  { .length = 27, .value = 0x07ffffc4 },
  { .length = 27, .value = 0x07ffffc5 },
  { .length = 27, .value = 0x07ffffc6 },
  { .length = 27, .value = 0x07ffffc7 },
  { .length = 27, .value = 0x07ffffc8 },
  { .length = 27, .value = 0x07ffffc9 },
  { .length = 27, .value = 0x07ffffca },
  { .length = 27, .value = 0x07ffffcb },
  { .length = 27, .value = 0x07ffffcc },
  { .length = 27, .value = 0x07ffffcd },
  { .length = 27, .value = 0x07ffffce },
  { .length = 27, .value = 0x07ffffcf },
  { .length = 27, .value = 0x07ffffd0 },
  { .length = 27, .value = 0x07ffffd1 },
  { .length = 27, .value = 0x07ffffd2 },
  { .length = 27, .value = 0x07ffffd3 },
  { .length = 27, .value = 0x07ffffd4 },
  { .length = 27, .value = 0x07ffffd5 },
  { .length = 27, .value = 0x07ffffd6 },
  { .length = 27, .value = 0x07ffffd7 },
  { .length = 27, .value = 0x07ffffd8 },
  { .length = 27, .value = 0x07ffffd9 },
  { .length = 8, .value = 0x000000e8 },
  { .length = 12, .value = 0x00000ffc },
  { .length = 14, .value = 0x00003ffa },
  { .length = 15, .value = 0x00007ffc },
  { .length = 15, .value = 0x00007ffd },
  { .length = 6, .value = 0x00000024 },
  { .length = 7, .value = 0x0000006e },
  { .length = 15, .value = 0x00007ffe },
  { .length = 11, .value = 0x000007fa },
  { .length = 11, .value = 0x000007fb },
  { .length = 10, .value = 0x000003fa },
  { .length = 11, .value = 0x000007fc },
  { .length = 8, .value = 0x000000e9 },
  { .length = 6, .value = 0x00000025 },
  { .length = 5, .value = 0x00000004 },
  { .length = 4, .value = 0x00000000 },
  { .length = 5, .value = 0x00000005 },
  { .length = 5, .value = 0x00000006 },
  { .length = 5, .value = 0x00000007 },
  { .length = 6, .value = 0x00000026 },
  { .length = 6, .value = 0x00000027 },
  { .length = 6, .value = 0x00000028 },
  { .length = 6, .value = 0x00000029 },
  { .length = 6, .value = 0x0000002a },
  { .length = 6, .value = 0x0000002b },
  { .length = 6, .value = 0x0000002c },
  { .length = 9, .value = 0x000001ec },
  { .length = 8, .value = 0x000000ea },
  { .length = 18, .value = 0x0003fffe },
  { .length = 6, .value = 0x0000002d },
  { .length = 17, .value = 0x0001fffc },
  { .length = 9, .value = 0x000001ed },
  { .length = 14, .value = 0x00003ffb },
  { .length = 7, .value = 0x0000006f },
  { .length = 8, .value = 0x000000eb },
  { .length = 8, .value = 0x000000ec },
  { .length = 8, .value = 0x000000ed },
  { .length = 8, .value = 0x000000ee },
  { .length = 7, .value = 0x00000070 },
  { .length = 9, .value = 0x000001ee },
  { .length = 9, .value = 0x000001ef },
  { .length = 9, .value = 0x000001f0 },
  { .length = 9, .value = 0x000001f1 },
  { .length = 10, .value = 0x000003fb },
  { .length = 9, .value = 0x000001f2 },
  { .length = 8, .value = 0x000000ef },
  { .length = 9, .value = 0x000001f3 },
  { .length = 9, .value = 0x000001f4 },
  { .length = 9, .value = 0x000001f5 },
  { .length = 9, .value = 0x000001f6 },
  { .length = 9, .value = 0x000001f7 },
  { .length = 8, .value = 0x000000f0 },
  { .length = 8, .value = 0x000000f1 },
  { .length = 9, .value = 0x000001f8 },
  { .length = 9, .value = 0x000001f9 },
  { .length = 9, .value = 0x000001fa },
  { .length = 9, .value = 0x000001fb },
  { .length = 9, .value = 0x000001fc },
  { .length = 10, .value = 0x000003fc },
  { .length = 14, .value = 0x00003ffc },
  { .length = 27, .value = 0x07ffffda },
  { .length = 13, .value = 0x00001ffc },
  { .length = 14, .value = 0x00003ffd },
  { .length = 6, .value = 0x0000002e },
  { .length = 19, .value = 0x0007fffe },
  { .length = 5, .value = 0x00000008 },
  { .length = 6, .value = 0x0000002f },
  { .length = 5, .value = 0x00000009 },
  { .length = 6, .value = 0x00000030 },
  { .length = 4, .value = 0x00000001 },
  { .length = 6, .value = 0x00000031 },
  { .length = 6, .value = 0x00000032 },
  { .length = 6, .value = 0x00000033 },
  { .length = 5, .value = 0x0000000a },
  { .length = 7, .value = 0x00000071 },
  { .length = 7, .value = 0x00000072 },
  { .length = 5, .value = 0x0000000b },
  { .length = 6, .value = 0x00000034 },
  { .length = 5, .value = 0x0000000c },
  { .length = 5, .value = 0x0000000d },
  { .length = 5, .value = 0x0000000e },
  { .length = 8, .value = 0x000000f2 },
  { .length = 5, .value = 0x0000000f },
  { .length = 5, .value = 0x00000010 },
  { .length = 5, .value = 0x00000011 },
  { .length = 6, .value = 0x00000035 },
  { .length = 7, .value = 0x00000073 },
  { .length = 6, .value = 0x00000036 },
  { .length = 8, .value = 0x000000f3 },
  { .length = 8, .value = 0x000000f4 },
  { .length = 8, .value = 0x000000f5 },
  { .length = 17, .value = 0x0001fffd },
  { .length = 11, .value = 0x000007fd },
  { .length = 17, .value = 0x0001fffe },
  { .length = 12, .value = 0x00000ffd },
  { .length = 27, .value = 0x07ffffdb },
  { .length = 27, .value = 0x07ffffdc },
  { .length = 27, .value = 0x07ffffdd },
  { .length = 27, .value = 0x07ffffde },
  { .length = 27, .value = 0x07ffffdf },
  { .length = 27, .value = 0x07ffffe0 },
  { .length = 27, .value = 0x07ffffe1 },
  { .length = 27, .value = 0x07ffffe2 },
  { .length = 27, .value = 0x07ffffe3 },
  { .length = 27, .value = 0x07ffffe4 },
  { .length = 27, .value = 0x07ffffe5 },
  { .length = 27, .value = 0x07ffffe6 },
  { .length = 27, .value = 0x07ffffe7 },
  { .length = 27, .value = 0x07ffffe8 },
  { .length = 27, .value = 0x07ffffe9 },
  { .length = 27, .value = 0x07ffffea },
  { .length = 27, .value = 0x07ffffeb },
  { .length = 27, .value = 0x07ffffec },
  { .length = 27, .value = 0x07ffffed },
  { .length = 27, .value = 0x07ffffee },
  { .length = 27, .value = 0x07ffffef },
  { .length = 27, .value = 0x07fffff0 },
  { .length = 27, .value = 0x07fffff1 },
  { .length = 27, .value = 0x07fffff2 },
  { .length = 27, .value = 0x07fffff3 },
  { .length = 27, .value = 0x07fffff4 },
  { .length = 27, .value = 0x07fffff5 },
  { .length = 27, .value = 0x07fffff6 },
  { .length = 27, .value = 0x07fffff7 },
  { .length = 27, .value = 0x07fffff8 },
  { .length = 27, .value = 0x07fffff9 },
  { .length = 27, .value = 0x07fffffa },
  { .length = 27, .value = 0x07fffffb },
  { .length = 27, .value = 0x07fffffc },
  { .length = 27, .value = 0x07fffffd },
  { .length = 27, .value = 0x07fffffe },
  { .length = 27, .value = 0x07ffffff },
  { .length = 26, .value = 0x03ffff80 },
  { .length = 26, .value = 0x03ffff81 },
  { .length = 26, .value = 0x03ffff82 },
  { .length = 26, .value = 0x03ffff83 },
  { .length = 26, .value = 0x03ffff84 },
  { .length = 26, .value = 0x03ffff85 },
  { .length = 26, .value = 0x03ffff86 },
  { .length = 26, .value = 0x03ffff87 },
  { .length = 26, .value = 0x03ffff88 },
  { .length = 26, .value = 0x03ffff89 },
  { .length = 26, .value = 0x03ffff8a },
  { .length = 26, .value = 0x03ffff8b },
  { .length = 26, .value = 0x03ffff8c },
  { .length = 26, .value = 0x03ffff8d },
  { .length = 26, .value = 0x03ffff8e },
  { .length = 26, .value = 0x03ffff8f },
  { .length = 26, .value = 0x03ffff90 },
  { .length = 26, .value = 0x03ffff91 },
  { .length = 26, .value = 0x03ffff92 },
  { .length = 26, .value = 0x03ffff93 },
  { .length = 26, .value = 0x03ffff94 },
  { .length = 26, .value = 0x03ffff95 },
  { .length = 26, .value = 0x03ffff96 },
  { .length = 26, .value = 0x03ffff97 },
  { .length = 26, .value = 0x03ffff98 },
  { .length = 26, .value = 0x03ffff99 },
  { .length = 26, .value = 0x03ffff9a },
  { .length = 26, .value = 0x03ffff9b },
  { .length = 26, .value = 0x03ffff9c },
  { .length = 26, .value = 0x03ffff9d },
  { .length = 26, .value = 0x03ffff9e },
  { .length = 26, .value = 0x03ffff9f },
  { .length = 26, .value = 0x03ffffa0 },
  { .length = 26, .value = 0x03ffffa1 },
  { .length = 26, .value = 0x03ffffa2 },
  { .length = 26, .value = 0x03ffffa3 },
  { .length = 26, .value = 0x03ffffa4 },
  { .length = 26, .value = 0x03ffffa5 },
  { .length = 26, .value = 0x03ffffa6 },
  { .length = 26, .value = 0x03ffffa7 },
  { .length = 26, .value = 0x03ffffa8 },
  { .length = 26, .value = 0x03ffffa9 },
  { .length = 26, .value = 0x03ffffaa },
  { .length = 26, .value = 0x03ffffab },
  { .length = 26, .value = 0x03ffffac },
  { .length = 26, .value = 0x03ffffad },
  { .length = 26, .value = 0x03ffffae },
  { .length = 26, .value = 0x03ffffaf },
  { .length = 26, .value = 0x03ffffb0 },
  { .length = 26, .value = 0x03ffffb1 },
  { .length = 26, .value = 0x03ffffb2 },
  { .length = 26, .value = 0x03ffffb3 },
  { .length = 26, .value = 0x03ffffb4 },
  { .length = 26, .value = 0x03ffffb5 },
  { .length = 26, .value = 0x03ffffb6 },
  { .length = 26, .value = 0x03ffffb7 },
  { .length = 26, .value = 0x03ffffb8 },
  { .length = 26, .value = 0x03ffffb9 },
  { .length = 26, .value = 0x03ffffba },
  { .length = 26, .value = 0x03ffffbb },
  { .length = 26, .value = 0x03ffffbc },
  { .length = 26, .value = 0x03ffffbd },
  { .length = 26, .value = 0x03ffffbe },
  { .length = 26, .value = 0x03ffffbf },
  { .length = 26, .value = 0x03ffffc0 },
  { .length = 26, .value = 0x03ffffc1 },
  { .length = 26, .value = 0x03ffffc2 },
  { .length = 26, .value = 0x03ffffc3 },
  { .length = 26, .value = 0x03ffffc4 },
  { .length = 26, .value = 0x03ffffc5 },
  { .length = 26, .value = 0x03ffffc6 },
  { .length = 26, .value = 0x03ffffc7 },
  { .length = 26, .value = 0x03ffffc8 },
  { .length = 26, .value = 0x03ffffc9 },
  { .length = 26, .value = 0x03ffffca },
  { .length = 26, .value = 0x03ffffcb },
  { .length = 26, .value = 0x03ffffcc },
  { .length = 26, .value = 0x03ffffcd },
  { .length = 26, .value = 0x03ffffce },
  { .length = 26, .value = 0x03ffffcf },
  { .length = 26, .value = 0x03ffffd0 },
  { .length = 26, .value = 0x03ffffd1 },
  { .length = 26, .value = 0x03ffffd2 },
  { .length = 26, .value = 0x03ffffd3 },
  { .length = 26, .value = 0x03ffffd4 },
  { .length = 26, .value = 0x03ffffd5 },
  { .length = 26, .value = 0x03ffffd6 },
  { .length = 26, .value = 0x03ffffd7 },
  { .length = 26, .value = 0x03ffffd8 },
  { .length = 26, .value = 0x03ffffd9 },
  { .length = 26, .value = 0x03ffffda },
  { .length = 26, .value = 0x03ffffdb },
  { .length = 26, .value = 0x03ffffdc }
};

} // namespace net
} // namespace mozilla

#endif // mozilla__net__Http2HuffOutgoing_h
