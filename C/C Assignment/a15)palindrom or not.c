#include<stdio.h>
#include<string.h>
void main()
{


char string[40];
int length=0,flag=3,i;
printf("\nEnter String : ");
gets(string);

for(i=0;string[i] != '\0';i++)
{
	length++;
}

for(i=0;i<length/2;i++)
{
	if((string[i]) != string[length-1-i])
	{
		flag=5;
		break;
	}
}

if(flag==3)
{
	printf("\nPALINDROME");
}
else
{
	printf("\nNOT PALINDROME");
}
}