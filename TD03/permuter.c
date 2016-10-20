#include <stdio.h>

void echange(int* a,int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}	

int main()
{
	int a,b;
	a = 4;
	b = 5;

echange(&a,&b);
printf("%d",a);
printf("%d",b);

return 0;
}	
