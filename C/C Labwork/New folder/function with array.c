#include<stdio.h>

void display(int a);
void main()
{
	int arr[5]={10,20,30,40,50};
	int i;
	for(i=0;i<5;i++)
	{
		display(arr[i]);
	}
}

void display(int a)
{
	printf("  %d",a);
	
}