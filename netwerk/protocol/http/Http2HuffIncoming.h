#ifndef mozilla__net__Http2HuffIncoming_h
#define mozilla__net__Http2HuffIncoming_h

namespace mozilla {
namespace net {

struct huff_incoming_table;

struct huff_incoming_entry {
  uint8_t prefix_len;
  uint8_t value;
  huff_incoming_table *ptr;
};

struct huff_incoming_table {
  uint8_t prefix_len;
  huff_incoming_entry *entries;
};

static huff_incoming_table huff_incoming_246 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 37, .ptr = nullptr },
    { .prefix_len = 1, .value = 40, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_247 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 41, .ptr = nullptr },
    { .prefix_len = 1, .value = 59, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_248 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 72, .ptr = nullptr },
    { .prefix_len = 1, .value = 76, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_249 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 80, .ptr = nullptr },
    { .prefix_len = 1, .value = 82, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_250 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 85, .ptr = nullptr },
    { .prefix_len = 1, .value = 86, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_251 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 89, .ptr = nullptr },
    { .prefix_len = 1, .value = 95, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_252 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 106, .ptr = nullptr },
    { .prefix_len = 1, .value = 107, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_253 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 113, .ptr = nullptr },
    { .prefix_len = 1, .value = 122, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_254 = {
  .prefix_len = 2,
  .entries = {
    { .prefix_len = 2, .value = 38, .ptr = nullptr },
    { .prefix_len = 2, .value = 75, .ptr = nullptr },
    { .prefix_len = 2, .value = 81, .ptr = nullptr },
    { .prefix_len = 2, .value = 88, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_222 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 0, .ptr = nullptr },
    { .prefix_len = 1, .value = 1, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_223 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 2, .ptr = nullptr },
    { .prefix_len = 1, .value = 3, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_224 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 4, .ptr = nullptr },
    { .prefix_len = 1, .value = 5, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_225 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 6, .ptr = nullptr },
    { .prefix_len = 1, .value = 7, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_226 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 8, .ptr = nullptr },
    { .prefix_len = 1, .value = 9, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_227 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 10, .ptr = nullptr },
    { .prefix_len = 1, .value = 11, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_228 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 12, .ptr = nullptr },
    { .prefix_len = 1, .value = 13, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_229 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 14, .ptr = nullptr },
    { .prefix_len = 1, .value = 15, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_230 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 16, .ptr = nullptr },
    { .prefix_len = 1, .value = 17, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_231 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 18, .ptr = nullptr },
    { .prefix_len = 1, .value = 19, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_232 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 20, .ptr = nullptr },
    { .prefix_len = 1, .value = 21, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_233 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 22, .ptr = nullptr },
    { .prefix_len = 1, .value = 23, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_234 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 24, .ptr = nullptr },
    { .prefix_len = 1, .value = 25, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_235 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 26, .ptr = nullptr },
    { .prefix_len = 1, .value = 27, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_236 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 28, .ptr = nullptr },
    { .prefix_len = 1, .value = 29, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_237 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 30, .ptr = nullptr },
    { .prefix_len = 1, .value = 31, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_238 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 127, .ptr = nullptr },
    { .prefix_len = 1, .value = 128, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_239 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 129, .ptr = nullptr },
    { .prefix_len = 1, .value = 130, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_240 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 131, .ptr = nullptr },
    { .prefix_len = 1, .value = 132, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_241 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 133, .ptr = nullptr },
    { .prefix_len = 1, .value = 134, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_242 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 135, .ptr = nullptr },
    { .prefix_len = 1, .value = 136, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_243 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 137, .ptr = nullptr },
    { .prefix_len = 1, .value = 138, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_244 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 139, .ptr = nullptr },
    { .prefix_len = 1, .value = 140, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_245 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 141, .ptr = nullptr },
    { .prefix_len = 1, .value = 142, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_246 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 143, .ptr = nullptr },
    { .prefix_len = 1, .value = 144, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_247 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 145, .ptr = nullptr },
    { .prefix_len = 1, .value = 146, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_248 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 147, .ptr = nullptr },
    { .prefix_len = 1, .value = 148, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_249 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 149, .ptr = nullptr },
    { .prefix_len = 1, .value = 150, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_250 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 151, .ptr = nullptr },
    { .prefix_len = 1, .value = 152, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_251 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 153, .ptr = nullptr },
    { .prefix_len = 1, .value = 154, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_252 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 155, .ptr = nullptr },
    { .prefix_len = 1, .value = 156, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_253 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 157, .ptr = nullptr },
    { .prefix_len = 1, .value = 158, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_254 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 159, .ptr = nullptr },
    { .prefix_len = 1, .value = 160, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255_255 = {
  .prefix_len = 1,
  .entries = {
    { .prefix_len = 1, .value = 161, .ptr = nullptr },
    { .prefix_len = 1, .value = 162, .ptr = nullptr },
  }
};

static huff_incoming_table huff_incoming_255_255 = {
  .prefix_len = 8,
  .entries = {
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 1, .value = 96, .ptr = nullptr },
    { .prefix_len = 8, .value = 163, .ptr = nullptr },
    { .prefix_len = 8, .value = 164, .ptr = nullptr },
    { .prefix_len = 8, .value = 165, .ptr = nullptr },
    { .prefix_len = 8, .value = 166, .ptr = nullptr },
    { .prefix_len = 8, .value = 167, .ptr = nullptr },
    { .prefix_len = 8, .value = 168, .ptr = nullptr },
    { .prefix_len = 8, .value = 169, .ptr = nullptr },
    { .prefix_len = 8, .value = 170, .ptr = nullptr },
    { .prefix_len = 8, .value = 171, .ptr = nullptr },
    { .prefix_len = 8, .value = 172, .ptr = nullptr },
    { .prefix_len = 8, .value = 173, .ptr = nullptr },
    { .prefix_len = 8, .value = 174, .ptr = nullptr },
    { .prefix_len = 8, .value = 175, .ptr = nullptr },
    { .prefix_len = 8, .value = 176, .ptr = nullptr },
    { .prefix_len = 8, .value = 177, .ptr = nullptr },
    { .prefix_len = 8, .value = 178, .ptr = nullptr },
    { .prefix_len = 8, .value = 179, .ptr = nullptr },
    { .prefix_len = 8, .value = 180, .ptr = nullptr },
    { .prefix_len = 8, .value = 181, .ptr = nullptr },
    { .prefix_len = 8, .value = 182, .ptr = nullptr },
    { .prefix_len = 8, .value = 183, .ptr = nullptr },
    { .prefix_len = 8, .value = 184, .ptr = nullptr },
    { .prefix_len = 8, .value = 185, .ptr = nullptr },
    { .prefix_len = 8, .value = 186, .ptr = nullptr },
    { .prefix_len = 8, .value = 187, .ptr = nullptr },
    { .prefix_len = 8, .value = 188, .ptr = nullptr },
    { .prefix_len = 8, .value = 189, .ptr = nullptr },
    { .prefix_len = 8, .value = 190, .ptr = nullptr },
    { .prefix_len = 8, .value = 191, .ptr = nullptr },
    { .prefix_len = 8, .value = 192, .ptr = nullptr },
    { .prefix_len = 8, .value = 193, .ptr = nullptr },
    { .prefix_len = 8, .value = 194, .ptr = nullptr },
    { .prefix_len = 8, .value = 195, .ptr = nullptr },
    { .prefix_len = 8, .value = 196, .ptr = nullptr },
    { .prefix_len = 8, .value = 197, .ptr = nullptr },
    { .prefix_len = 8, .value = 198, .ptr = nullptr },
    { .prefix_len = 8, .value = 199, .ptr = nullptr },
    { .prefix_len = 8, .value = 200, .ptr = nullptr },
    { .prefix_len = 8, .value = 201, .ptr = nullptr },
    { .prefix_len = 8, .value = 202, .ptr = nullptr },
    { .prefix_len = 8, .value = 203, .ptr = nullptr },
    { .prefix_len = 8, .value = 204, .ptr = nullptr },
    { .prefix_len = 8, .value = 205, .ptr = nullptr },
    { .prefix_len = 8, .value = 206, .ptr = nullptr },
    { .prefix_len = 8, .value = 207, .ptr = nullptr },
    { .prefix_len = 8, .value = 208, .ptr = nullptr },
    { .prefix_len = 8, .value = 209, .ptr = nullptr },
    { .prefix_len = 8, .value = 210, .ptr = nullptr },
    { .prefix_len = 8, .value = 211, .ptr = nullptr },
    { .prefix_len = 8, .value = 212, .ptr = nullptr },
    { .prefix_len = 8, .value = 213, .ptr = nullptr },
    { .prefix_len = 8, .value = 214, .ptr = nullptr },
    { .prefix_len = 8, .value = 215, .ptr = nullptr },
    { .prefix_len = 8, .value = 216, .ptr = nullptr },
    { .prefix_len = 8, .value = 217, .ptr = nullptr },
    { .prefix_len = 8, .value = 218, .ptr = nullptr },
    { .prefix_len = 8, .value = 219, .ptr = nullptr },
    { .prefix_len = 8, .value = 220, .ptr = nullptr },
    { .prefix_len = 8, .value = 221, .ptr = nullptr },
    { .prefix_len = 8, .value = 222, .ptr = nullptr },
    { .prefix_len = 8, .value = 223, .ptr = nullptr },
    { .prefix_len = 8, .value = 224, .ptr = nullptr },
    { .prefix_len = 8, .value = 225, .ptr = nullptr },
    { .prefix_len = 8, .value = 226, .ptr = nullptr },
    { .prefix_len = 8, .value = 227, .ptr = nullptr },
    { .prefix_len = 8, .value = 228, .ptr = nullptr },
    { .prefix_len = 8, .value = 229, .ptr = nullptr },
    { .prefix_len = 8, .value = 230, .ptr = nullptr },
    { .prefix_len = 8, .value = 231, .ptr = nullptr },
    { .prefix_len = 8, .value = 232, .ptr = nullptr },
    { .prefix_len = 8, .value = 233, .ptr = nullptr },
    { .prefix_len = 8, .value = 234, .ptr = nullptr },
    { .prefix_len = 8, .value = 235, .ptr = nullptr },
    { .prefix_len = 8, .value = 236, .ptr = nullptr },
    { .prefix_len = 8, .value = 237, .ptr = nullptr },
    { .prefix_len = 8, .value = 238, .ptr = nullptr },
    { .prefix_len = 8, .value = 239, .ptr = nullptr },
    { .prefix_len = 8, .value = 240, .ptr = nullptr },
    { .prefix_len = 8, .value = 241, .ptr = nullptr },
    { .prefix_len = 8, .value = 242, .ptr = nullptr },
    { .prefix_len = 8, .value = 243, .ptr = nullptr },
    { .prefix_len = 8, .value = 244, .ptr = nullptr },
    { .prefix_len = 8, .value = 245, .ptr = nullptr },
    { .prefix_len = 8, .value = 246, .ptr = nullptr },
    { .prefix_len = 8, .value = 247, .ptr = nullptr },
    { .prefix_len = 8, .value = 248, .ptr = nullptr },
    { .prefix_len = 8, .value = 249, .ptr = nullptr },
    { .prefix_len = 8, .value = 250, .ptr = nullptr },
    { .prefix_len = 8, .value = 251, .ptr = nullptr },
    { .prefix_len = 8, .value = 252, .ptr = nullptr },
    { .prefix_len = 8, .value = 253, .ptr = nullptr },
    { .prefix_len = 8, .value = 254, .ptr = nullptr },
    { .prefix_len = 8, .value = 255, .ptr = nullptr },
    { .prefix_len = 8, .value = 256, .ptr = nullptr },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_222 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_223 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_224 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_225 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_226 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_227 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_228 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_229 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_230 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_231 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_232 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_233 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_234 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_235 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_236 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_237 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_238 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_239 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_240 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_241 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_242 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_243 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_244 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_245 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_246 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_247 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_248 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_249 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_250 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_251 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_252 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_253 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_254 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255_255 }
  }
};

static huff_incoming_table huff_incoming_255 = {
  .prefix_len = 8,
  .entries = {
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 2, .value = 90, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 43, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 91, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 3, .value = 93, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 33, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 42, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 4, .value = 63, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 35, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 39, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 62, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 5, .value = 92, .ptr = nullptr },
    { .prefix_len = 6, .value = 36, .ptr = nullptr },
    { .prefix_len = 6, .value = 36, .ptr = nullptr },
    { .prefix_len = 6, .value = 36, .ptr = nullptr },
    { .prefix_len = 6, .value = 36, .ptr = nullptr },
    { .prefix_len = 6, .value = 124, .ptr = nullptr },
    { .prefix_len = 6, .value = 124, .ptr = nullptr },
    { .prefix_len = 6, .value = 124, .ptr = nullptr },
    { .prefix_len = 6, .value = 124, .ptr = nullptr },
    { .prefix_len = 7, .value = 94, .ptr = nullptr },
    { .prefix_len = 7, .value = 94, .ptr = nullptr },
    { .prefix_len = 8, .value = 60, .ptr = nullptr },
    { .prefix_len = 8, .value = 64, .ptr = nullptr },
    { .prefix_len = 8, .value = 123, .ptr = nullptr },
    { .prefix_len = 8, .value = 125, .ptr = nullptr },
    { .prefix_len = 8, .value = 126, .ptr = nullptr },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255_255 }
  }
};

static huff_incoming_table huff_incoming_root = {
  .prefix_len = 8,
  .entries = {
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 32, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 48, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 49, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 4, .value = 50, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 51, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 52, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 53, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 56, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 57, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 58, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 84, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 97, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 5, .value = 101, .ptr = nullptr },
    { .prefix_len = 6, .value = 44, .ptr = nullptr },
    { .prefix_len = 6, .value = 44, .ptr = nullptr },
    { .prefix_len = 6, .value = 44, .ptr = nullptr },
    { .prefix_len = 6, .value = 44, .ptr = nullptr },
    { .prefix_len = 6, .value = 45, .ptr = nullptr },
    { .prefix_len = 6, .value = 45, .ptr = nullptr },
    { .prefix_len = 6, .value = 45, .ptr = nullptr },
    { .prefix_len = 6, .value = 45, .ptr = nullptr },
    { .prefix_len = 6, .value = 46, .ptr = nullptr },
    { .prefix_len = 6, .value = 46, .ptr = nullptr },
    { .prefix_len = 6, .value = 46, .ptr = nullptr },
    { .prefix_len = 6, .value = 46, .ptr = nullptr },
    { .prefix_len = 6, .value = 54, .ptr = nullptr },
    { .prefix_len = 6, .value = 54, .ptr = nullptr },
    { .prefix_len = 6, .value = 54, .ptr = nullptr },
    { .prefix_len = 6, .value = 54, .ptr = nullptr },
    { .prefix_len = 6, .value = 55, .ptr = nullptr },
    { .prefix_len = 6, .value = 55, .ptr = nullptr },
    { .prefix_len = 6, .value = 55, .ptr = nullptr },
    { .prefix_len = 6, .value = 55, .ptr = nullptr },
    { .prefix_len = 6, .value = 71, .ptr = nullptr },
    { .prefix_len = 6, .value = 71, .ptr = nullptr },
    { .prefix_len = 6, .value = 71, .ptr = nullptr },
    { .prefix_len = 6, .value = 71, .ptr = nullptr },
    { .prefix_len = 6, .value = 77, .ptr = nullptr },
    { .prefix_len = 6, .value = 77, .ptr = nullptr },
    { .prefix_len = 6, .value = 77, .ptr = nullptr },
    { .prefix_len = 6, .value = 77, .ptr = nullptr },
    { .prefix_len = 6, .value = 83, .ptr = nullptr },
    { .prefix_len = 6, .value = 83, .ptr = nullptr },
    { .prefix_len = 6, .value = 83, .ptr = nullptr },
    { .prefix_len = 6, .value = 83, .ptr = nullptr },
    { .prefix_len = 6, .value = 99, .ptr = nullptr },
    { .prefix_len = 6, .value = 99, .ptr = nullptr },
    { .prefix_len = 6, .value = 99, .ptr = nullptr },
    { .prefix_len = 6, .value = 99, .ptr = nullptr },
    { .prefix_len = 6, .value = 100, .ptr = nullptr },
    { .prefix_len = 6, .value = 100, .ptr = nullptr },
    { .prefix_len = 6, .value = 100, .ptr = nullptr },
    { .prefix_len = 6, .value = 100, .ptr = nullptr },
    { .prefix_len = 6, .value = 105, .ptr = nullptr },
    { .prefix_len = 6, .value = 105, .ptr = nullptr },
    { .prefix_len = 6, .value = 105, .ptr = nullptr },
    { .prefix_len = 6, .value = 105, .ptr = nullptr },
    { .prefix_len = 6, .value = 109, .ptr = nullptr },
    { .prefix_len = 6, .value = 109, .ptr = nullptr },
    { .prefix_len = 6, .value = 109, .ptr = nullptr },
    { .prefix_len = 6, .value = 109, .ptr = nullptr },
    { .prefix_len = 6, .value = 110, .ptr = nullptr },
    { .prefix_len = 6, .value = 110, .ptr = nullptr },
    { .prefix_len = 6, .value = 110, .ptr = nullptr },
    { .prefix_len = 6, .value = 110, .ptr = nullptr },
    { .prefix_len = 6, .value = 111, .ptr = nullptr },
    { .prefix_len = 6, .value = 111, .ptr = nullptr },
    { .prefix_len = 6, .value = 111, .ptr = nullptr },
    { .prefix_len = 6, .value = 111, .ptr = nullptr },
    { .prefix_len = 6, .value = 112, .ptr = nullptr },
    { .prefix_len = 6, .value = 112, .ptr = nullptr },
    { .prefix_len = 6, .value = 112, .ptr = nullptr },
    { .prefix_len = 6, .value = 112, .ptr = nullptr },
    { .prefix_len = 6, .value = 114, .ptr = nullptr },
    { .prefix_len = 6, .value = 114, .ptr = nullptr },
    { .prefix_len = 6, .value = 114, .ptr = nullptr },
    { .prefix_len = 6, .value = 114, .ptr = nullptr },
    { .prefix_len = 6, .value = 115, .ptr = nullptr },
    { .prefix_len = 6, .value = 115, .ptr = nullptr },
    { .prefix_len = 6, .value = 115, .ptr = nullptr },
    { .prefix_len = 6, .value = 115, .ptr = nullptr },
    { .prefix_len = 6, .value = 116, .ptr = nullptr },
    { .prefix_len = 6, .value = 116, .ptr = nullptr },
    { .prefix_len = 6, .value = 116, .ptr = nullptr },
    { .prefix_len = 6, .value = 116, .ptr = nullptr },
    { .prefix_len = 6, .value = 117, .ptr = nullptr },
    { .prefix_len = 6, .value = 117, .ptr = nullptr },
    { .prefix_len = 6, .value = 117, .ptr = nullptr },
    { .prefix_len = 6, .value = 117, .ptr = nullptr },
    { .prefix_len = 7, .value = 34, .ptr = nullptr },
    { .prefix_len = 7, .value = 34, .ptr = nullptr },
    { .prefix_len = 7, .value = 47, .ptr = nullptr },
    { .prefix_len = 7, .value = 47, .ptr = nullptr },
    { .prefix_len = 7, .value = 61, .ptr = nullptr },
    { .prefix_len = 7, .value = 61, .ptr = nullptr },
    { .prefix_len = 7, .value = 65, .ptr = nullptr },
    { .prefix_len = 7, .value = 65, .ptr = nullptr },
    { .prefix_len = 7, .value = 98, .ptr = nullptr },
    { .prefix_len = 7, .value = 98, .ptr = nullptr },
    { .prefix_len = 7, .value = 102, .ptr = nullptr },
    { .prefix_len = 7, .value = 102, .ptr = nullptr },
    { .prefix_len = 7, .value = 103, .ptr = nullptr },
    { .prefix_len = 7, .value = 103, .ptr = nullptr },
    { .prefix_len = 7, .value = 104, .ptr = nullptr },
    { .prefix_len = 7, .value = 104, .ptr = nullptr },
    { .prefix_len = 7, .value = 108, .ptr = nullptr },
    { .prefix_len = 7, .value = 108, .ptr = nullptr },
    { .prefix_len = 7, .value = 118, .ptr = nullptr },
    { .prefix_len = 7, .value = 118, .ptr = nullptr },
    { .prefix_len = 7, .value = 120, .ptr = nullptr },
    { .prefix_len = 7, .value = 120, .ptr = nullptr },
    { .prefix_len = 8, .value = 66, .ptr = nullptr },
    { .prefix_len = 8, .value = 67, .ptr = nullptr },
    { .prefix_len = 8, .value = 68, .ptr = nullptr },
    { .prefix_len = 8, .value = 69, .ptr = nullptr },
    { .prefix_len = 8, .value = 70, .ptr = nullptr },
    { .prefix_len = 8, .value = 73, .ptr = nullptr },
    { .prefix_len = 8, .value = 74, .ptr = nullptr },
    { .prefix_len = 8, .value = 78, .ptr = nullptr },
    { .prefix_len = 8, .value = 79, .ptr = nullptr },
    { .prefix_len = 8, .value = 87, .ptr = nullptr },
    { .prefix_len = 8, .value = 119, .ptr = nullptr },
    { .prefix_len = 8, .value = 121, .ptr = nullptr },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_246 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_247 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_248 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_249 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_250 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_251 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_252 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_253 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_254 },
    { .prefix_len = 0, .value = 0, .ptr = &huff_incoming_255 }
  }
};

} // namespace net
} // namespace mozilla

#endif // mozilla__net__Http2HuffIncoming_h
