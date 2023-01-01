#include<stdio.h>
void main()
{
	printf("Enter a Sentance : ");
	
	reversesentence();
}
void reversesentence()
{
	char c;
	scanf("%c",&c);
	if(c != '\n')
	{
	
	reversesentence();
     }
	printf("%c",c);
     
}