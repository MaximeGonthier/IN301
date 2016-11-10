#include <stdio.h>
#include <stdlib.h>

struct element
{
	int val;															//val c'est le premier élément de la liste
	struct element* suiv;												//suiv c'est le pointeur
};

typedef struct element* liste;

liste creerlistevide()
{	
	return NULL;														//Si la liste est vide, le pointeur ne pointe sur rien donc il vaut
}																		//NULL

int testlistevide(liste l)
{
	return (l == NULL);
}		

liste insere_debut(liste l, int x)
{
	liste new = malloc(sizeof(struct element));							//Le malloc alloue de la mémoire au nouvel élement de la liste
	new->val = x;														//La fleche remplace le T.quelquechose pour les pointeurs
	new->suiv = l;														//x est la valeur du nouvel élément
	return new;															//Le champs suivant est l car il faut du coup decaler la liste
}

liste insere_fin(liste l, int y)
{
	liste new = malloc(sizeof(struct element));
	if(!testlistevide(l))
	{
		liste new = malloc(sizeof(struct element));
		new->val = y;														//La fleche remplace le T.quelquechose pour les pointeurs
		new->suiv = l;														//x est la valeur du nouvel élément
		return new;	
	}	
	else 
	{	l->suiv; 
		insere_fin(l->suiv,y);
	}	
}																		// anisi en renvoyant new on a bien la liste plus 1 élément
	
void liberermemoire(liste l)
{
	if(!testlistevide(l))
	{
	liberermemoire(l->suiv);											//attention faut free apres pour pas tuer l'element
	free(l);
}
}	

void afficherliste(liste l)
{
	int x;
	while(l != NULL)
	{
		printf("%p",l->suiv);
		l = l->suiv;
	}
}	

void afficheiteratif(liste l)
{
	liste temp = l;
	while(!testlistevide(temp))
	{
		printf("%d",temp->val);											
		temp = temp->suiv;
	}
	printf("\n");
}		

int main()
{
	int x = 1;
	int y = 2;
	liste l;
	l = creerlistevide();
	l = testlistevide(l);													//Attention il faut juste l'afficher a l'aide d'une autre valeur
	l = insere_debut(l,x);	
	l = insere_fin(l,y);											// ne pas ecrire l = testlistevide, ca vire le pointeur
	afficheiteratif(l);
	
return 0;	
}	
