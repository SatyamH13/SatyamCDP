#include<stdio.h>
int main()
{
	int a=30,b=70,add,sub,mul;
	float div;
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/(float)b;
	
	printf("\n\n(1) addition is %d",add);
	printf("\n\n(2) subtraction is %d",sub);
	printf("\n\n(3) multiplication is %d",mul);
	printf("\n\n(4) division is %.2f",div);
}