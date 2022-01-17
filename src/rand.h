//#include "u.h"

#ifndef RAND_H
#define RAND_H


unsigned rando(unsigned int start_range, unsigned int end_range) {
    
    static unsigned int random = 0xACE1U;

    if(start_range == end_range) {
        return start_range;
    }

    random += 0x3AD;
    random %= end_range;

    while(random < start_range){
        random = random + end_range - start_range;
    }

    return random;
}

#endif
