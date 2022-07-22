#include<stdio.h>
int main()
{
	int a,total=0;
	for(a=1;a<=100;a++)
	{
		printf("\n%d",a);
		total=total+a;
	}
	printf("\n-----");
	printf("\n%d = total",total);
	
}
