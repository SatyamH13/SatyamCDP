#include<stdio.h>
int main()
{
	int a,number,table;
	printf("\n\nEnter a Number : ");
	scanf("%d",&number);
	printf("\n---------------");
	printf("\nTABLE NUMBER %d",number);
	printf("\n---------------");
	for(a=1;a<=10;a++)
	{
	  
	  table = number*a;
	  printf("\n\n%d X %d = %d",number,a,table);
	  
	}
}