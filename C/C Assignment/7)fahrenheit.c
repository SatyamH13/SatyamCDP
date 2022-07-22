#include<stdio.h>

int main()
{
	float celsius,fahrenheit;
	
	printf("\nENTER TEMPERATURE IN CELSIUS :   ");
	scanf("%f",&celsius);
	
	fahrenheit =(1.8 * celsius) + 32;
	
	printf("\nTEMPERATURE IN FAHRENHEIT    :  %f",fahrenheit);
}