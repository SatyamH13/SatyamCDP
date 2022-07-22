#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\nENTER A :\t");
	scanf("%d",&a);
	printf("\nENTER B :\t");
	scanf("%d",&b);
	printf("\nENTER C :\t");
	scanf("%d",&c);
	printf("\nA = %d , B = %d , C = %d",a,b,c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("\n\nA IS GREATER",a);
		}
		else
		{
			printf("\n\nC IS GREATER",c);	
		}
	}
	else
	{
		if(b > c)
		{
			printf("\n\nB IS GREATER",b);
		}
		else
		{
			printf("\n\nC IS GREATER",c);
		}
	}
}