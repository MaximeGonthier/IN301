#include <stdio.h>

int main()
{
	float r,x,a;
	x = 0;
	scanf("%d",&r);
	a = r;
	
	while ((x*x) != r)
	{
		x = (a/2);
		a = a/2;
	}
	
	r = x;	
