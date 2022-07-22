#include<stdio.h>
int main()
{
	int a,b;
	for(a=0;a<=10;a++)
	{
		if(a == 3)
		{
			printf("\n%d---%d",a,b);
			break;
		}
		for(b=0;b<=10;b++)
		{
			printf("\n%d---%d",a,b);
			
		}
		
		printf("\nout of loop b");
	}
	printf("\nout of loop a");
	
}