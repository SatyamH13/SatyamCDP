#include<stdio.h>
void main()
{
	int i,arr[10],n,position,search;
	
	printf("\nEnter The Size Of Array : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\nElement [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nPlease Enter The Search Element : ");
	scanf("%d",&search);
	
	position=0;
	
	for(i=1;i<=n;i++)
	{
		if(arr[i] == search )
		{
			position=1;
			break;
		}
	}
	
	if(position == 1)
	{
		printf("\nThe Search Element Position is : %d",i);
	}
	else
	{
		printf("\nInvelid Choice");
	}
	
	
}