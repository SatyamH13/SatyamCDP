#include<stdio.h>
void main()
{
	int arr[5]={10,20,30,40,50};
	int a;
	
	printf("\n-----------");
	printf("\nAddress");
	printf("\n-----------");
	
	for(a=0;a<5;a++)
	{
		printf("\n\n%u",&arr[a]);
	}
	
	printf("\n\n-----------");
	printf("\nvalue");
	printf("\n-----------");
	
	for(a=0;a<5;a++)
	{
		printf("\n\n%u",*(&arr[a]));
		
	}
	
}