#include<stdio.h>
int main()
{
	char ch;
	printf("\nENTER CHARACTER :   ");
	scanf("%c",&ch);
	
	
	switch(ch)
	{
	
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':printf("%c is vowel",ch);
	         break;
	default:printf("%c is consonant",ch);
	        break;
    }
} 