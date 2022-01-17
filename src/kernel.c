#include "color.h"

#include "counter.h"

#include "font.h"
#include "graphics.h"

/*void tests() {
  const char *test = "::KERNEL::";

  int i = 1;

  for(i = 1; i < 5; i++) {
    
    printV(test, GREEN2);
 
    sleep(10000);

    printV(test, BLUE2);

    sleep(10000);

    //tests
    printV(test, BLUE0);
    sleep(10000);
    printV(test, BLUE1);
    sleep(10000);
    printV(test, BLUE);
    sleep(10000);
    printV(test, GREEN0);
    sleep(10000);
    printV(test, GREEN1);
    sleep(10000);
    printV(test, GREEN);
    sleep(10000);
    printV(test, T);
    sleep(1000000);

  }

  printV("- - - - - W E L C O M E - - - - -", BLUE);

  sleep(10000);
}*/

int main(void) {

  SCREEN_INIT();

  int i = 1;

  while(i == 1) {
    //tests();
    //char *s = " ";
    //while(1) {PUT_PIXEL(120, 120, s, 0x05);}
    //sleep2(100000000);
    char a = 'a';
    print_char(a, 120, 120, 0x07);

    counter();

    S_SWAP();

  }

  return 0;

}
