#include "font.h"

#include "g.h"

#undef _sbuffers
#undef _sback

const unsigned char font[2][6] = {
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},//(space)
	{0x3C, 0x12, 0x12, 0x12, 0x3E, 0x00} //(a)
};

void print_char(int x, int y, int color) {

    //assert(c >= 0, "ERROR:: invalid char");

    const u8 *gly = font[2];

    for(size_t yy = 0; yy < 8; yy++) {
        for(size_t xx = 0; xx < 8; xx++) {
	    if(gly[yy] & (1 << xx)) {
		screen_set(color, x + xx, y + yy);
	    }
	}
    }

}
