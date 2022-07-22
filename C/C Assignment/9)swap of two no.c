#include<stdio.h>
int main()
{
	int a=10,b=20;
	
	printf("\nBEFORE SWAP A = %d , B = %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\nAFTER SWAP A = %d , B = %d",a,b);
}