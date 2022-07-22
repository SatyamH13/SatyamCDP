#include<stdio.h>


struct variable{
	int a;
	int b;
}v1;

void swap(int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;	

}

void main()
{
	int *ptr1,*ptr2;

    v1.a=10;
	v1.b=20;
	ptr1 =v1.a;
	ptr2 =v1.b;

	printf("\nBefore Swap A = %d , B = %d",*(&ptr1),*(&ptr2));
	swap(&ptr1,&ptr2);
	printf("\nAfter Swap A = %d , B = %d",ptr1,ptr2);	
}

