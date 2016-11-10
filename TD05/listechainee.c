#include <stdio.h>														//l->suiv correspond a tl(l), il renvoie la liste moins
#include <stdlib.h>														//le premier élement

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
	liste debut = l;
	while(l->suiv != NULL)											
	{	l = l->suiv; }													//Cela parcoure la liste jusqu'a la fin
	
		liste new = malloc(sizeof(struct element));						//Ici on prend le nouvel élement
		new->val = y;													//La fleche remplace le T.quelquechose pour les pointeurs
		new->suiv = NULL;
		l->suiv= new;													//L'élement apres l, qui est la le dernier, prend la valeur de new													
		return debut;													// qui est y. Ensuite on return le début de la liste			
}	

liste insere_triee(liste l, int b)
{
	liste new;
	if((l->suiv == NULL) || (b <=(l->val)))
	{
		new = malloc(sizeof(struct element));
		
		new->val = b;
		new->suiv = l;
		return new;
	}
	
	l->suiv = insere_triee(l->suiv,b);	
	return l;
}	
																				
void liberermemoire(liste l)
{
	if(!testlistevide(l))
	{
		liberermemoire(l->suiv);										//attention faut free apres pour pas tuer l'element
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

int est_triee(liste l)
{
	while(l->suiv !=NULL)
	{
		if(l->val <= (l->suiv)-> val)
		{
			l = l->suiv;
		}	
		else return 1;
	}
	return 2;
}		

liste recherche(liste l)
{
	int e = 6;
	if(l->val == e)
	{
		printf("l'element recherche est %d",e);
		printf("\n");
	}
	else
	{	
		l->suiv = recherche(l->suiv);
	}
}	

liste supprimer(liste l,int f)
{
	if(l->val == f)
	{
		liste temp = l->suiv;
		liberermemoire(l);
		return temp;
	}
	else
	{
		l->suiv = supprimer(l->suiv,f);
	}		
}		

void afficheiteratif(liste l)
{
	liste temp = l;
	while(!testlistevide(temp))
	{
		printf("%d ",temp->val);											
		temp = temp->suiv;
	}
	printf("\n");
}		

int taille(liste l)
{
	if(l == NULL) {return 0;}
	return 1 + taille(l->suiv);											//rappelle la fonction moins son premier élément
}	

int main()
{
	int x = 1;
	int y = 2;
	int z = 4;
	int b = 3;
	int e;
	int c;
	int a;
	int i;
	int f = 7;
	liste l;
	
	l = creerlistevide();
	testlistevide(l);													//Attention il faut juste l'afficher a l'aide d'une autre valeur
	l = insere_debut(l,x);
	l = insere_fin(l,y);												// ne pas ecrire l = testlistevide, ca vire le pointeur
	
	for(i = 0; i<7; i++)
	{
		l = insere_fin(l,z);
		z = z+1;
	}	
	
	a = est_triee(l);
	if (a == 1) {printf("la liste n'est pas triee"); printf("\n");}
	else {printf("la liste est triee"); printf("\n");}
	printf("\n");
	
	l = insere_triee(l,b);
	afficheiteratif(l);
	printf("\n");
	
	c = taille(l);
	printf("la liste contient %d elements", c); printf("\n");
	printf("\n");
	
	l = recherche(l);
	printf("\n");
	
	l = supprimer(l,f);
	liberermemoire(l->suiv);
	printf("\n");
	
	
return 0;	
}	
