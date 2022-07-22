#include<stdio.h>
int main()
{
	long a;
	
	printf("number\tsquare\tcube\n");
	printf("====================\n");
	for(a=0;a<=1000;a++)

printf("  %d\t  %d\t %d\n",a,a*a,a*a*a);	
}