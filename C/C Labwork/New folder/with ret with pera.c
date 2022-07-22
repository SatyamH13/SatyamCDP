#include<stdio.h>
int add(int no1 , int no2);

int main()
{
	int a,b,addition;
	printf("\n\nEnter A :");
	scanf("%d",&a);
	printf("\n\nEnter B :");
	scanf("%d",&b);
	printf("\n\nA = %d , B = %d",a,b);
	addition = add(a,b);
	printf("\n\nAddition %d + %d = %d",a,b,addition);
	
}

int add(int no1 , int no2)
{
	return no1 + no2;
}