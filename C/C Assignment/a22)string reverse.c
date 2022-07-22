#include<stdio.h>
void reverse(char *str);
void main()
{
	char str[50];
	printf("\nEnter The String : ");
	gets(str);
	printf("\nBefore Reversing String : %s",str);
	reverse(str);
	printf("\nBefore Reversing String : %s",str);	
}

void reverse(char *str)
{
	int len,i,temp;
	
	len=strlen(str);
	for(i = 0; i < len/2; i++ )
	{
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}