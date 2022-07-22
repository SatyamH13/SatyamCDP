#include<stdio.h>
void main()
{
	int a,b;
	
	printf("\nEnter A : ");
	scanf("%d",&a);
	printf("\nEnter B : ");
	scanf("%d",&b);
	printf("\nA = %d , B = %d",a,b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}

void add(int i , int j)
{
	int add;
	add = i + j;
	printf("\n\n---------------------");
	printf("\nAddition = %d",add);
	printf("\n---------------------");
}
void sub(int i , int j)
{
    int sub;
	sub = i - j;
	printf("\n\n---------------------");
	printf("\nSubtraction = %d",sub);
	printf("\n---------------------");	
}
void mul(int i , int j)
{
	int mul;
	mul = i * j;
	printf("\n\n---------------------");
	printf("\nMultiplication = %d",mul);
	printf("\n---------------------");
}
void div(int i , int j)
{
    float div;
	div = i / (float) j;
	printf("\n\n---------------------");
	printf("\nAddition = %.2f",div);
	printf("\n---------------------");	
}