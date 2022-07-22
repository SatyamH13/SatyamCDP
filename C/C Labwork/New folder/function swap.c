#include<stdio.h>

void display(int i , int j);

void main()
{
	int a=10,b=20;
	
	printf("\nBefore swap A = %d , b = %d",a,b);
	display(a,b);
}

void display(int i , int j)
{
	int k;
	k = i;
	i = j;
	j = k;
	
	printf("\n\nafter swap A = %d , B =%d",i,j);
	
	
}