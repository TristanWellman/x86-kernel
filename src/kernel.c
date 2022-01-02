#include "printf.h"
#include "color.h"

int WL0 = 10000;
int WL1 = 6000;

void sleep(int seconds) {

  int i, j, k;

  for(i = 0; i < seconds; i++) {
    for(j = 0; j < WL0; j++) {
      for(k - 0; k < WL1; k++) {
        int volatile t = 120 * j * i * k;
        t = t + 5;
      }
    }
  }

}

void main(void) {

  const char *test = "::KERNEL::";

  int i = 1;

  for(i = 1; i < 5; i++) {
    
    printV(test, BLUE);
  
    sleep(10000);

    printV(test, RED);

    sleep(10000);

  }

  printV("- - - - - W E L C O M E - - - - -", GREY);

  return;

}
