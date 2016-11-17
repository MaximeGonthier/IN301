#include "stdio.h"
#include "constantes.h"
#include "sudoku.h"
void ecrire(int x, int y, SUDOKU S)
{
	FILE *f= fopen("sudoku.sudo", "w"); 								//w pour write

	fprintf(f, "%d", S.la_case[x][y].val); 
}																		//fprintf pour ecrire dans un fichier
