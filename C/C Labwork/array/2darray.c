#include<stdio.h>
void main()
{
	int i,j,add,arr1[3][3],arr2[3][3],arr3[3][3];
	printf("\n-------------------");
	printf("\nEnter array : 1");
	printf("\n-------------------");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Element = ");
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n-------------------");
	printf("\nEnter array : 2");
	printf("\n-------------------");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter Element = ");
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n-----------------------");
	printf("\nAddition array 1 and 2");
	printf("\n-----------------------");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=arr1[i][j] + arr2[i][j];
			printf("\nAddition Is : %d ",arr3[i][j]);
			
		}
	}
}