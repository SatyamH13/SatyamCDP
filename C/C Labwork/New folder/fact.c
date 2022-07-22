#include<stdio.h>
int main()
{
	int a=1,fact=1,number;
	printf("\nEnter a Number : ");
	scanf("%d",&number);
	for(a=1;a<=number;a++)
	{
		fact=fact*a;
	}
	printf("factorial number of %d is : %d",number,fact);
}