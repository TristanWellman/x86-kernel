#include "u.h"

struct RGB {
  u8 r, g, b;
};

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 350
#define SCREEN_SIZE (SCREEN_WIDTH * SCREEN_HEIGHT)

void S_SWAP();
void S_CLEAR();
void SCREEN_INIT();
