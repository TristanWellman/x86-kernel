#include "counter.h"

#include "printf.h"
#include "rand.h"

u64 num = 0;

i32 colors = 0x00;

int WL0 = 10000;
int WL1 = 6000;

void sleep2(int seconds) {

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

void counter() {

  i32 true = 1;

  while(true == 1) {

    unsigned int start = 1;
    unsigned int end = 256;

    unsigned int rand_num = rando(start, end);

    i32 final_color = colors + rand_num;

    const char *num = num + '0';
    
    printV(num, final_color);

    sleep2(10000);

  }

}
