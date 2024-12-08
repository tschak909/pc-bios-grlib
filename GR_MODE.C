/**
 * @brief Set BIOS graphics mode
 * @param m The BIOS graphics mode to set
 *         if m is -1, current mode is returned.
 */

#include <dos.h>

gr_mode(m)
char m;
{
	union REGS r;
	if (m<0)
	{
		r.h.ah = 0x0F;
	}
	else
	{
		r.h.ah = 0x00;
		r.h.al = m;
	}

	int86(0x10,&r,&r);

	return r.h.al;
}
