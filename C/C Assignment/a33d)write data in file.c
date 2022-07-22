#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("satyam.txt","w");
	
	if(fp == NULL)
	{
		printf("cannot open a file");
		exit(1);
	}
	
	while((ch=fgetchar()) != '\n')
	
	
		fputc(ch,fp);
		fclose(fp);
    
}