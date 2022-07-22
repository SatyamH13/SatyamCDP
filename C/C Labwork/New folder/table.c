#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=20;a++)
	{
		printf("\n---------------");
		printf("\nTABLE OF %d\n",a);
		printf("---------------");
		for(b=1;b<=10;b++)
		{
			c=a*b;
			printf("\n%d X %d = %d",a,b,c);
			
			
		}
	
		
	}
	
}