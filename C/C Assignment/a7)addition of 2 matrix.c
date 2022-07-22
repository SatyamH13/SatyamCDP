#include<stdio.h>
void main()
{
	int i,j,arr1[2][2],arr2[2][2],arr3[2][2];
	printf("\n----------------------------");
	printf("\nENTER ARRAY 1 ELEMENTS");
	printf("\n----------------------------\n");
	for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("\nEnter Array 1 [%d][%d] =   ",i,j);
    		scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n\nArray 1 Elements Are :\n");
	for(i=0;i<2;i++)
    {   
	    printf("\n");
    	for(j=0;j<2;j++)
    	{
    		printf("%d\t",arr1[i][j]);
		}
	}
	
	printf("\n----------------------------");
	printf("\nENTER ARRAY 2 ELEMENTS");
	printf("\n----------------------------\n");
	for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("\nEnter Array 2 [%d][%d] =   ",i,j);
    		scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n\nArray 2 Elements Are :\n");
	for(i=0;i<2;i++)
    {   
	    printf("\n");
    	for(j=0;j<2;j++)
    	{
    		printf("%d\t",arr2[i][j]);
		}
	}
	
	printf("\n----------------------------");
	printf("\nADDITION OF ARRAY 1 AND 2");
	printf("\n----------------------------\n");
	for(i=0;i<2;i++)
    {
	    printf("\n");
    	for(j=0;j<2;j++)
    	{  
    	    arr3[i][j] = arr1[i][j] + arr2[i][j];
    		printf("%d\t",arr3[i][j]);
    	
		}
	}
	
	
	
}