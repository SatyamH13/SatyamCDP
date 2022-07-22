#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<10;a++)
	{
		for(c=1;c<=10-1;c++)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}