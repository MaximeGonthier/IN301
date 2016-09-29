#include <stdio.h>

int main()
{
	int X; int Y; int Z;
	
	Z = 0;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	printf ("%d x %d", X,Y);
	printf ("\n");
	
	while (X>1)
	{
	
		if (X%2 == 0)
		{
			X = X/2;
			Y = Y*2;
		}
		else 
		{
			X = X-1;
			Z = Z+Y;
		}
	
	printf("= %d x %d + %d",X,Y,Z);
	printf("\n");
	}
	Z = Y + Z;
	printf ("%d", Z);
	printf("\n");
		
return 0;
}			
