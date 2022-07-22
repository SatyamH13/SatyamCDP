#include<stdio.h>
int main()
{
	int a,b,choice;
	float per;
	
	printf("\nENTER A :\t");
	scanf("%d",&a);
	printf("\nENTER B :\t");
	scanf("%d",&b);
	printf("\nA = %d ,B = %d",a,b);
	
	printf("\n\n---------------calc menu---------------\n");
	printf("\n1.addition\n\n2.substraction\n\n3.multiplication\n\n4.division");
	printf("\n\nPLEASE ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\nADDITION IS %d",a+b);
		       break;
		case 2:printf("\nSUBSTRACTION IS %d",a-b);
		       break;
		case 3:printf("\nMULTIPLICATION IS %d",a*b);
		       break;
		case 4:printf("\nDIVISION IS %f",a/(float)b);
		       break;
		default:printf("\nINVELID CHOICE");	 
		       break;  		          
	}
	
}