/**
 * @brief Draw box from x1,y1 to x2,y2 using color c
 * @param x1 - Starting X coordinate
 * @param y1 - Starting Y coordinate
 * @param x2 - Ending X coordinate
 * @param y2 - Ending Y coordinate
 * @param c  - Desired color
 */

gr_box(x1,y1,x2,y2,c)
short x1,y1,x2,y2;
char c;
{
	gr_line(x1,y1,x2,y1,c);
	gr_line(x2,y1,x2,y2,c);
	gr_line(x2,y2,x1,y2,c);
	gr_line(x1,y2,x1,y1,c);
}
