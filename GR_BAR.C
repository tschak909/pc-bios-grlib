/**
 * @brief Draw bar using repeated gr_line ;)
 * @param x1 - Starting X coordinate of bar.
 * @param y1 - Starting Y coordinate of bar.
 * @param x2 - Ending X coordinate of bar.
 * @param y2 - Ending Y coordinate of bar.
 * @param c  - desired color
 */

gr_bar(x1,y1,x2,y2,c)
short x1,y1,x2,y2;
char c;
{
	short d,h;
	if (y1<y2)
	{
		d = 1;
		h = y2 - y1;
	}
	else
	{
		d = -1;
		h = y1 - y2;
	}
	do
	{
		gr_line(x1,y1,x2,y1,c);
		y1 += d;
	} while (h--);
}
