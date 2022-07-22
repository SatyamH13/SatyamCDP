#include<stdio.h>
void mul(int i , int j);

void main()
{
	int a,b;
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\nA = %d , B = %d",a,b);
	mul(a,b);
	
}

void mul(int i , int j)
{
	
	printf("\n\nMultiplication is = %d",i*j);
	
}