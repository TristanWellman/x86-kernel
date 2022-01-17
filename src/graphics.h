#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "u.h"

struct RGB {
  u8 r, g, b;
};

#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 200
#define SCREEN_SIZE (SCREEN_WIDTH * SCREEN_HEIGHT)

extern u8 _sbuffers[2][SCREEN_SIZE];
extern u8 _sback;

#define COLOR(_r, _g, _b)((u8)( \
     (((_r) & 0x7) << 5) |       \
     (((_g) & 0x7) << 2) |       \
     (((_b) & 0x3) << 0)))
 
#define COLOR_R(_index) (((_index) >> 5) & 0x7)
#define COLOR_G(_index) (((_index) >> 2) & 0x7)
#define COLOR_B(_index) (((_index) >> 0) & 0x3)
 
#define COLOR_ADD(_index, _d) __extension__({   \
         __typeof__(_index) _c = (_index);       \
         __typeof__(_d) __d = (_d);              \
         COLOR(                                  \
             CLAMP(COLOR_R(_c) + __d, 0, 7),     \
             CLAMP(COLOR_G(_c) + __d, 0, 7),     \
             CLAMP(COLOR_B(_c) + __d, 0, 3)      \
         );})

#define screen_set(_p, _x, _y)\
    (_sbuffers[_sback][((_y) * SCREEN_WIDTH + (_x))]=(_p))

void S_SWAP();
void S_CLEAR();
void SCREEN_INIT();

#endif
