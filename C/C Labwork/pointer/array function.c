#include<stdio.h>

void main()
{
	int a, arr[5]={10,20,30,40,50};
	

	for(a=0;a<5;a++)
	{
		display(arr[a]);
		
	}
 
}

void display(int i)
{
	printf(" %d",i);
}