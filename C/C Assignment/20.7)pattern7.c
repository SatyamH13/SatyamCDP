#include<stdio.h>
void main()
{
	int a,b,c,i,j,k,l,m;
	
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4-a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=a;c++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
			
		}
		
		for(j=i;j>=1;j--)
		{
			printf(" *");
				
		}
		
		printf("\n");
		break;
	}
	
	

	
		
	
}