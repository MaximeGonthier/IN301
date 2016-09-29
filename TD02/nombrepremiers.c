#include <stdio.h>

int main()
{
	int x; int i;
	scanf("%d", &x);
	i = 2; j = 0;
	while (i<(x-1))
	{
		if ((x%i) == 0)
			{printf ("PAS PREMIER");
				return 0;}
		else { i = i+1;}	
	}
	
	printf ("PREMIER       ");
	printf ("\n");
	
return 0;
}			
	
