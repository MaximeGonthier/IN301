#include <stdlib.h>
#include "surface.h"
#include "circonference.h"
#include <stdio.h>	
#include "affiche.h"
#include "graphics.h"

int main()
{
	init_graphics (400,400);
	int b,c;
	int rayon = 10;
	b = calcul_circonference(rayon);
	c = calcul_surface(rayon);
	
	printf("%d",b);
	printf("\n");
	printf("%d",c);
	printf("\n");
	
	dessine_cercle(rayon);


exit(0);
}
