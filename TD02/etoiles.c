#include <stdio.h>

int i,j;

int main()
{
	i = 0; j = 0;
	
	while (i<10)
	{
	j = i;
	
		while (j<10)
		{
		printf (" ");
		j = j+1;
		}
		
	printf ("*");
	printf ("\n");
	i = i+1;
	
	}
return 0;
}	
