#include<stdio.h>
int main()
{
	int year;
	printf("\nENTER A YEAR :  ");
	scanf("%d",&year);
	
	if(year % 400 ==0)
	{
		printf("\n%d IS A LEAP YEAR.",year);
	}
	else if(year % 4 ==0)
	{
		printf("\n%d IS A LEAP YEAR.",year);
	}
	
	else
	{
		printf("\n%d IS NOT A LEAP YEAR.",year);
	}
}
