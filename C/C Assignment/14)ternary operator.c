#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("\nENTER A :");
	scanf("%d",&a);
	printf("\nENTER B :");
	scanf("%d",&b);
	printf("\nENTER C :");
	scanf("%d",&c);
	
	max = (a>b)?(a>c?a:c):(b>c?b:c);
	printf("\nTHE BIGGEST NUMBER IS %d",max);
}