#include<stdio.h>
void main()
{
	int a,c,d;
	
	printf("\nEnter Any Number :  ");
	scanf("%d",&a);
	c = sqr(a);
	d = cube(a);
	
	printf("\n\nSquare :  %d",c);
	printf("\n\ncube :  %d",d);
	
}

int sqr(int i)
{
	return i*i;
}
int cube(int i)
{
   return i*i*i;	
}