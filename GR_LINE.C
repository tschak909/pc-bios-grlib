/**
 * @brief Draw line from x1,y1 to x2,y2
 * @param x1 starting X coordinate
 * @param y1 starting Y coordinate
 * @param x2 ending X coordinate
 * @param y2 ending Y coordinate
 * @param c color to use for pset
 */

gr_line(x1,y1,x2,y2,c)
short x1,y1,x2,y2;
char c;
{
	short dx,dy;
	short stepx,stepy;

	dx = x2 - x1;
	dy = y2 - y1;

	if (dx<0)
	{
		dx = -dx;
		stepx = -1;
	}
	else
	{
		stepx = 1;
	}

	if (dy<0)
	{
		dy = -dy;
		stepy = -1;
	}
	else
	{
		stepy = 1;
	}

	dx <<= 1;
	dy <<= 1;

	gr_pset(x1,y1,c);

	if (dx > dy)
	{
		int fraction = dy - (dx >> 1);
		while (x1 != x2)
		{
			if (fraction >= 0)
			{
				y1 += stepy;
				fraction -= dx;
			}
			x1 += stepx;
			fraction += dy;
			gr_pset(x1,y1,c);
		}
	}
	else
	{
		int fraction = dx - (dy >> 1);
		while (y1 != y2)
		{
			if (fraction >= 0)
			{
				x1 += stepx;
				fraction -= dy;
			}
			y1 += stepy;
			fraction += dx;
			gr_pset(x1,y1,c);
		}
	}
}
