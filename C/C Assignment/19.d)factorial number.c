#include<stdio.h>
int main()
{
	int a,fact=1,number;
	printf("\nEnter a Number :  ");
	scanf("%d",&number);
	
	for(a=1;a<=number;a++)
	{
		fact=fact*a;
	}
	printf("\nFactorial Of %d is : %d",number,fact);
	
}