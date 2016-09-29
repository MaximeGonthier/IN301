#include <stdio.h>

int main()
{
	int entree;
	int heures;
	int minutes;
	int secondes;
	
	entree = 44444;      
	
	minutes = entree/60;
	secondes = entree%60;
	heures = minutes/60;
	minutes = minutes%60;
	
	printf ("heures : ");
	printf ("%d",heures);
	printf ("\n");
	printf ("minutes : ");
	printf ("%d",minutes);
	printf ("\n");
	printf ("secondes : ");
	printf ("%d",secondes);

return 0;
}	
