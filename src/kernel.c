#include "printf.h"
#include "color.h"
#include "graphics.h"
#include "GOL.h"

int WL0 = 10000;
int WL1 = 6000;

void sleep(int seconds) {

  int i, j, k;

  for(i = 0; i < seconds; i++) {
    for(j = 0; j < WL0; j++) {
      for(; k < WL1; k++) {
        int volatile t = 120 * j * i * k;
        t = t + 5;
      }
    }
  }

}

void tests() {
  const char *test = "::KERNEL::";

  int i = 1;

  for(i = 1; i < 5; i++) {
    
    printV(test, BLUE);
 
    sleep(10000);

    printV(test, RED);

    sleep(10000);

  }

  printV("- - - - - W E L C O M E - - - - -", GREY);

  sleep(10000);
}

int main(void) {

  SCREEN_INIT();

  tests();
  
  GOL();
  S_SWAP();

  return 0;

}
