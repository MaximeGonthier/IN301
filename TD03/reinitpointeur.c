#include <stdio.h>

void reinitPointeur(int** p)    //pointeur sur un pointeur pour acceder a p en dehors du void
{
	*p = NULL;					//valeur du pointeur
}

int main()
{
	int a = 1;
	int* p = &a;
	reinitPointeur(&p);			//forcement on appelle l'adresse de p et pas p direct
	if (p==NULL) {printf("k");}

return 0;	
}
