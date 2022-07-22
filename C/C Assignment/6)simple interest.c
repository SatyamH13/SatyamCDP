#include<stdio.h>
int main()
{
	float principalamount,rate,time,simpleinterest;
	printf("\nPRINCIPAL AMOUNT :   ");
	scanf("%f",&principalamount);
	printf("\nRATE             :   ");
	scanf("%f",&rate);
	printf("\nTIME             :   ");
	scanf("%f",&time);
	printf("PRINCIPAL AMOUNT = %f , RATE = %f , TIME = %f",principalamount,rate,time);
	
	simpleinterest=(principalamount*rate*time)/(float)100;
	
	printf("\n\nSIMPLE INTEREST IS %f",simpleinterest);
}