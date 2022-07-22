#include<stdio.h>
void main()
{
	int a,b,add;
	int *ptr1,*ptr2;
	
	printf("\nEnter A :  ");
	scanf("%d",&a);
	printf("\nEnter B :  ");
	scanf("%d",&b);
	
	printf("\nA = %d , B = %d",a,b);
	ptr1= &a;
	ptr2= &b;
	
	printf("\n\nThe Addition Is : %u",*(ptr1)+*(ptr2));
	
}