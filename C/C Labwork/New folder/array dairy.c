#include<stdio.h>
void main()
{
	int a,arr1[5],arr2[5],res[5];
	
	printf("\n----------------------------");
	printf("\nENTER ELEMENTS 1st ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		printf("\n\nEnter A [%d] = ",a);
		scanf("%d",&arr1[a]);
	}
	
	printf("\n----------------------------");
	printf("\nENTER ELEMENTS 2nd ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		printf("\n\nEnter A [%d] = ",a);
		scanf("%d",&arr2[a]);
	}
	
	printf("\n----------------------------");
	printf("\nADDITION OF 2 ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		res[a] = arr1[1] + arr2[2];
		printf("\n\nResult [%d] = %d",a,res[a]); 
	}
	
	
	
	
}