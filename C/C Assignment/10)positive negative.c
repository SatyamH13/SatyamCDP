#include<stdio.h>
int main()
{
	int A;
	printf("\n\nENTER THE NUMBER A :  ");
	scanf("%d",&A);
	
	if(A > 0)
	{
	printf("\n%d IS POSITIVE.",A);
    }
    else if(A < 0)
    {
    printf("\n%d IS NEGATIVE.",A);
	}
	else if(A == 0)
	{
	printf("\n%d IS ZERO.",A);
	}
}  

