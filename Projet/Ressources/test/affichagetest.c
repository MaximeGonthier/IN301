#include <uvsqgraphics.h>

void dessine()
{
	init_graphics(400,400);
	POINT a;
	a.x = 100;
	a.y = 100;
	draw_circle (a,50,rouge);
}
