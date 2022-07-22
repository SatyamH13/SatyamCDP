#include<stdio.h>
int main()
{
	int a,b,max;
	for(a=1;a<=10;a++)
	{
	printf("\n--------------");
	printf("\nTable no %d",a);
	printf("\n--------------");
	for(b=1;b<=10;b++)
	{
		max=a*b;
		printf("\n%d X %d = %d",a,b,a*b);
		
	}
	printf("\n");
    }
}