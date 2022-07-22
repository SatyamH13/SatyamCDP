#include<stdio.h>
void main()
{
	int no1,no2,cal;
	printf("\nEnter No 1 : ");
	scanf("%d",&no1);
	printf("\nEnter No 2 : ");
	scanf("%d",&no2);
	
	cal=add(no1,no2);
	printf("\naddition is %d",cal);
}

int add(int a,int b)
{
	return a+b;
}