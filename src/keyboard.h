#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "u.h"

/*first function and defs are for the interrupt controller or PIC*/

#define PIX1 0x20
#define PIX2 0xA0

#define PIC1_SI 0x20
#define PIC2_SI 0x28

#define PIC2_EI PIC2_SI + 7

#define PIC_ACK 0x20

void pic_ack(unsigned int interrupt) {

  if(interrupt < PIC1_SI || interrupt > PIC2_EI) {

    return;

  }

  if(interrupt < PIC2_SI) {
    outb(PIC_X1, PIC_ACK);
  } else {
    outb(PIX2, PIC_ACK);
  }

}

#define KEYBOARD_DATAP 0x60

unsigned char READ_SC(void) {

  return inB(KEYBOARD_DATAP);

}

#endif
