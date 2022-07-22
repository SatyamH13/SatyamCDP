#include<stdio.h>
#include<string.h>
void main()
{
	char fname[10],lname[10];
	
	
	printf("\nEnter a fName :");
	gets(fname);
	printf("\nEnter a lName :");
	gets(lname);
	
	
//	printf("\nLength : %d",strlen(fname));
//	printf("\n\nReverse : %s",strrev(fname));
//	printf("\n\nCombine : %s",strcat(fname,lname));
//  printf("\n\ncompare : %d",strcmp(fname,lname));
//  strcpy(lname,fname);
//  printf("\n\nCopy : %s",lname);
//  printf("\n\nLower Case : %s",strlwr(fname));
    printf("\n\nUpper case : %s",strupr(fname));


	
	
	
}