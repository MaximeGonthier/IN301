#include <stdio.h>

int main()
{
int n;
float e;
float s;
int i;
i = 1;
scanf("%d", &n);
scanf("%f", &e);
while ((1.0/(i*i))>e)
{
s = s+ (1.0/(i*i));
i = i+1;
printf("%f \n", s);
}
printf("la limite est %f",s);
printf("\n");

return 0;
}
