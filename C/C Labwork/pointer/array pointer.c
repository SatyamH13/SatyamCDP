#include<stdio.h>
void main()
{
	int arr[5]={10,20,30,40,50};
	
	printf("\nAddress is : %d",arr+0);
	printf("\nAddress is : %d",arr+1);
	printf("\nAddress is : %d",arr+2);
	printf("\nAddress is : %d",arr+3);
	printf("\nAddress is : %d",arr+4);
	
	
	printf("\nvalue is : %d",*(arr+0));
	printf("\nvalue is : %d",*(arr+1));
	printf("\nvalue is : %d",*(arr+2));
	printf("\nvalue is : %d",*(arr+3));
	printf("\nvalue is : %d",*(arr+4));
	
}