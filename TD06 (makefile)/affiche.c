#include "affiche.h"
#include <uvsqgraphics.h>
void dessine_cercle(int rayon)
{
	POINT a;
	a.x = 100;
	a.y = 100;
	draw_fill_circle(a,rayon,rouge);
	attendre(500);
}	
