/** 
 * @brief Type text s at desired position (x,y)
 * @param x Horizontal text position
 * @param y Vertical text position
 * @param s Pointer to NULL terminated text string
 */

#include <dos.h>

gr_text(x,y,s)
char x,y;
char *s;
{
	union REGS r;

	/* set cursor position */

	r.h.ah = 0x02;
	r.h.bh = 0; /* Always page 0 */
	r.h.dh = y;
	r.h.dl = x;

	int86(0x10,&r,0);

	/* print text */

	while (*s)
	{
		r.h.ah = 0x0E;
		r.h.al = *s;
		r.h.bl = 0x0f;

		int86(0x10,&r,0);

		s++;
	}
}
