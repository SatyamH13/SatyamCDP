#include<stdio.h>
void main()
{
	int a,b,i,j;
	
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=4;i>=1;i--)
	{
	 for(j=i;j>=1;j--)
	 {
	 	printf("*");
	 }
	 printf("\n");
	}
}