#include<stdio.h>

int factorial(int n)
{
 if(n==0)
 return 1;
 else
 return(n*factorial(n-1));	
	
}

void main()
{
	int number;
	int fact;
	printf("Enter Number : ");
	scanf("%d",&number);
	fact = factorial(number);
	
	printf("\naddition Of %d is %d\n",number,fact);
}