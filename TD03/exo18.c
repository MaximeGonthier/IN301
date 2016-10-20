#include <stdlib.h>
#include <stdio.h>
#include <time.h>


struct tableau
{
	int taille;
	int tab[100];
};

typedef struct tableau TABLEAU;	

int alea(int n)
{
	int c;
	
	c = rand()%n;						// Pour faire entre 0 et 100 et non 0 et NMAX srand sert a reinitialiser une suite de valeur
	return c;							// aléatoir pour ne pas avoir la meme quand on relance le programme. Ici on met l'heure qu'il est
}										// on peut mettre srand(time(NULL)); pour ce qu'on a dis au dessus

TABLEAU init_tableau ()
{
	int d,i;
	TABLEAU T;
	T.taille = 10;
	for (i = 0; i<10; i++)
	{
		T.tab[i] = alea(20);
	}
	return T;							// ne pas oublier de return le tableau
}	

TABLEAU triinsertion(TABLEAU T)
{	int i,j,temp;
	for(i = 0; i<9; i++)				//Pour etre plus general mettre T.taille
	{
		temp = T.tab[i+1];
		int p = 0;
		while(T.tab[p] < temp)
		{ p = p+1; }
		for (j=0; j>i; j--)
		{ T.tab[j+1] = T.tab[j]; }
		T.tab[p] = temp;
	}	
	return T;
}	

TABLEAU tripermutation(TABLEAU T)
{	
	int a,b,temp;
	for (a = 0; a<10; a++)
	{
		for(b = 10; b>=a; b--)
		{
			if(T.tab[b-1]>T.tab[b])
			{	
				temp = T.tab[b];
				T.tab[b] = T.tab[b-1];
				T.tab[b-1] = temp;
			}
		}
	}
	return T;
}

int minimun(TABLEAU T)
{
	int i;
	int min = T.tab[0];
	for(i = 1; i<10; i++)
	{
		if(min>T.tab[i])
		{
			min = T.tab[i];
		}
	}
	return min;
}		

TABLEAU insere(TABLEAU T)
{
	int a,i,k;
	a = alea(20);
	i = 0;
	while(a>T.tab[i])
	{
		i = i+1;
	}	
	
	k = i;
	
	for(i = T.taille+1; i>k; i--)
	{
		T.tab[i] = T.tab[i-1];
	}
	T.tab[k] = a;
	T.taille = T.taille + 1;
	return T;	
}	

void affiche(TABLEAU T)
{
	int i;
	for (i = 0; i<10; i++)
	{
		printf("%d ",T.tab[i]);
	}	
	printf("\n");
}	
							
int main()
{
	srand(time(NULL));
	TABLEAU T;
	int a,b,i;
	
	T = init_tableau();	
	affiche(T);
	
	T = tripermutation(T);
	affiche(T);
	
	a = minimun(T);
	printf("%d",a);
	printf("\n");
	
	T = insere(T);
	for (i = 0; i<11; i++)
	{
	printf("%d ",T.tab[i]);}
	
return 0;
}	
