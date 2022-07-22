#include<stdio.h>
int main()
{
	float radius,area;
	printf("\nENTER THE RADIUS OF CIRCLE:  ");
	scanf("%f",&radius);
	
	area = 3.14 * radius * radius;
	
	printf("\nAREA OF CIRCLE :  %f",area);
	
	return  (0);
}