#include<stdio.h>
void main()
{	
	fact();
}

void fact()
{
	int i,n,fact=1;
	printf("\nEnter Any Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	printf("\nThe Factorial Is : %d ",fact);
	
	
}