#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\nEnter A :\t");
	scanf("%d",&a);
	printf("\nEnter B :\t");
	scanf("%d",&b);
	printf("\nEnter C :\t");
	scanf("%d",&c);
	printf("\nA = %d , B = %d , C=%d\n",a,b,c);
	
	max = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
	printf("\n%d is greater",max);
	
	
}