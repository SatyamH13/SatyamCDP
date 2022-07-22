#include<stdio.h>
int main()
{
	int a,marks[10];
	printf("------------------------");
	printf("\nEnter Array Elements");
	printf("\n------------------------\n\n");
	for(a=0;a<=5;a++)
	{
		printf("\nEnter Array  [%d] :\t",a);
		scanf("%d",&marks[a]);
	}
	
	printf("\n------------------------");
	printf("\nArray Elements");
	printf("\n------------------------\n\n");
	
	for(a=0;a<=5;a++)
	{
		printf("\nArray  [%d] =\t%d\n",a,marks[a]);
	}	
}