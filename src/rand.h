#include "u.h"


struct random_data {
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state; /* array of state values */
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};

unsigned short lfsr = 0xACE1u;
unsigned bit;

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
