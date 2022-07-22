#include<stdio.h>
void main()
{
	char aa[50],bb[50],*a,*b;
	
	printf("\nEnter a First String : ");
	gets(aa);
	printf("\nEnter a Second String : ");
	gets(bb);
	a = aa;
	b = bb;
	while(*a)
	{
		a++;
	}
	while(*b)
	{
		*a = *b;
		b++;
		a++;
	}
	*a='\0';
	printf("\n\nThe String After Concatenation Is : %s",aa);
	
}