#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" *");
		}
		printf("\n");
	} 
	for(d=4;d>=1;d--)
	{
		for(e=4;e>=d;e--)
		{
			printf(" ");
		}
		for(f=d;f>=1;f--)
		{
			printf(" *");
		}
		printf("\n");
	}
}