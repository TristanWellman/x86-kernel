#include "color.h"

#include "counter.h"

#include "font.h"
#include "graphics.h"

#include "keyboard.h"

int main(void) {

  SCREEN_INIT();

  int i = 1;

  while(i == 1) {

    READ_SC();

    counter();

    S_SWAP();

  }

  return 0;

}
