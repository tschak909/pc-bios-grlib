/**
 * @brief Set Pixel at x,y with color c
 * @param x Horizontal position (set by mode)
 * @param y Vertical position (set by mode)
 * @param c Color to use (set by mode)
 */

#include <dos.h>

gr_pset(x,y,c)
unsigned short x,y;
char c;
{
	union REGS r;

	r.h.ah = 0x0C;
	r.h.al = c;
	r.h.bh = 0; /* always page 0 */
	r.x.cx = x;
	r.x.dx = y;

	int86(0x10,&r,0);
}
