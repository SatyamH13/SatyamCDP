#include<stdio.h>
void main()
{
	char str1[20],str2[20],i,j;
	printf("\nEnter First String  : ");
	scanf("%s",str1);
	printf("\nEnter Second String : ");
	scanf("%s",str2);
	
	for(i=0;str1[i] != '\0';i++);
	
		for(j=0;str2[j] != '\0';j++,i++)
		{
			str1[i]=str2[j];
		}
	
	str1[i]='\0';
	printf("\nOUTPUT : %s",str1);
}