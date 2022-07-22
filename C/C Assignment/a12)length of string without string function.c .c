#include<stdio.h>
void main()
{
	char str[50];
	int i;
	printf("\nEnter The String :  ");
	scanf("%s",&str);
	for(i=0;str[i]!= '\0';i++);
	
	
	printf("\nLength Of String : %d",i);

}