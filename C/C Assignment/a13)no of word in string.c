#include<stdio.h>

void main()
{
	char arr[50];
	int i,words=0;
	
	printf("\nEnter The Strig : ");
	gets(arr);
	
	for(i=0;arr[i];i++)
	{
		if(arr[i] == 32)
		
		words++;
    	
    	
	}
	
	if(i>0)
	
	words++;
	
	
	printf("\nNo Of Words In String = %d",words);
}