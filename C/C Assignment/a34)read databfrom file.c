#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("satyam.txt","r");
	
	if(fp == NULL)
	{
		printf("cannot open a file");
		exit(1);
	}
	

while((ch=fgetc(fp)) != EOF)
	
	printf("%c",ch);
	fclose(fp);
}