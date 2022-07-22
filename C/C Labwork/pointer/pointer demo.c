#include<stdio.h>

void main()
{
	int a = 10,b = 20;
	int *ptr1,*ptr2;

	ptr1=a;
	printf("\nAddress of A = %u",*&ptr1);
	ptr2=b;
	printf("\nAddress of B = %u",*&ptr2);
	
	
	
}