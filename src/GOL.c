#include "GOL.h"
#include "color.h"

void RL () {

  int i = 0;

  printV("0x0A", GREY);
  for(i = 0; i < COL; i++) {
    printV(" -----", GREY);
  }

  printV("0x0A", GREY);

}

int CLN(int a[ROW][COL], int r, int c) {

  int i, j;
  int count = 0;

  for(i = r - 1; i <= r + 1; i++) {
    
    for(j = c - 1; j <= c + 1; j++) {

      if((i == r && j == c) || (i < 0 || j < 0) || (i >= ROW || j >= COL)) {
        continue;
      }

      if(a[i][j] == 1) {
        count++;
      }

    }

  }

  return count;

}

int GOL() {

  int i, j;
  int a[ROW][COL], b[ROW][COL];

  int NLC;

  for(i = 0; i < ROW; i++) {
    
    for(j = 0; j < COL; j++) {
      
      a[i][j] = rando(0, 2);

    }

  }
  
  printV("Initial stage: ", GREY);
  RL();

  for(i = 0; i < ROW; i++) {
    
    printV(":", GREY);

    for(j = 0; j < COL; j++) {
      
      char num = a[i][j] + '0';
      printC(num, GREY);
      printV(" :", GREY);

    }
    RL();

  }

  for(i = 0; i < ROW; i++) {
    
    for(j = 0; j < COL; j++) {
    
      NLC = CLN(a, i, j);
      if(a[i][j] == 1 && (NLC == 2 || NLC == 3)) {
        
        b[i][j] = 1;

      } else if(a[i][j] == 0 && NLC == 3) {
      
        b[i][j] == 1;
      
      } else {
        b[i][j] = 0;
      }

    }

  }

  printV("0x0A", GREY);
  printV("Next generation", GREY);

  RL(ROW);

  for(i = 0; i < ROW; i++) {
    
    printV(":", GREY);

    for(j = 0; j < COL; j++) {
      
      char num = b[i][j] + '0';
      printC(num, GREY);
      printV(" :", GREY);

    }

    RL(ROW);

  }

  return 0;

}


