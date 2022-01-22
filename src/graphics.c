#include "graphics.h"

#define PM 0x3C6
#define PR 0x3C7
#define PW 0x3C8
#define PD 0x3C9

u8 *BUF = (u8 *) 0xA0000;

u8 sbufs[2][SCREEN_SIZE];
u8 sback = 0;

#define SBCUR (sbufs[sback])
#define SWAP() (sback = 1 -  sback)

void S_SWAP() {
  MEM_CPY(BUF, &SBCUR, SCREEN_SIZE);
  SWAP();
}

void S_CLEAR() {
    /*Not in use as of now*/
}

void SCREEN_INIT() {
  
  outPB(PM, 0xFF);
  outPB(PW, 0);

  for(u8 i = 0; i < 255; i++) {

    outPB(PD, (((i >> 2) & 0x7) * (256 / 4)) / 4);
    outPB(PD, (((i >> 1) & 0x7) * (256 / 2)) / 4);
    outPB(PD, (((i >> 0) & 0x3) * (256 / 2)) / 4);

  }

  /*set color 255 to white*/
  
  outPB(PD, 0xFF);
  outPB(PD, 0xFF);
  outPB(PD, 0xFF);

}
