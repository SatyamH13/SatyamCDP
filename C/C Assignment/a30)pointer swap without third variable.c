#include<stdio.h>
void main()
{
	int a=10,b=20;
	int *ptr1,*ptr2;
	
	ptr1 =&a;
	ptr2 =&b;
	printf("\n\nBefore Swaping A = %u , B = %u",*(ptr1),*(ptr2));
	
*ptr1 =	(*ptr1)*(*ptr2);
*ptr2 =	(*ptr1)/(*ptr2);
*ptr1 =	(*ptr1)/(*ptr2);
	
	printf("\n\nAfter Swaping A = %u , B = %u",*(ptr1),*(ptr2));
	
	
	
}