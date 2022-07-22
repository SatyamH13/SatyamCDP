#include<stdio.h>
void main()
{
	int a,b,array[5];
	printf("\n--------------------------");
	printf("\n\tELEMENTS");
	printf("\n--------------------------");
	for(a=1;a<=5;a++)
   {
   	printf("\n\nEnter Elements [%d] =  ",a);
   	scanf("%d",&array[a]);
   
   }
   	printf("\n\n--------------------------");
   	printf("\nELEMENTS ARE");
   	printf("\n--------------------------");
   
   for(b=1;b<=5;b++)
   {
   		printf("\n\nElements [%d] = %d",b,array[b]);
   }
}