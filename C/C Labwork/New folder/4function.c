#include<stdio.h>

void addition();
void substraction();
void multiplication();
void division();

void main()
{
	int choice;
	
	printf("\n----------------");
	printf("\nCHOICE MENU");
	printf("\n----------------");
	
	printf("\n\n1.addition\n\n2.substraction\n\n3.multiplication\n\n4.division\n");
	printf("\n\nPLEASE ENTER YOUR CHOICE :  ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :addition();
		        break;
		case 2 :substraction();
		        break;
		case 3 :multiplication();
		        break;
		case 4 :division();
		        break;
		default:printf("\nINVALIDE CHOICE");
		        break;						        
	}
}

void addition()
{
	int a,b,add;
	
	printf("\nEnter A :  ");
	scanf("%d",&a);
	printf("\nEnter B :  ");
	scanf("%d",&b);
	
	add = a+b;
	printf("\n-------------------");
	printf("\nAddition is :  %d",add);
	printf("\n-------------------");
	
}

void substraction()
{
	int a,b,sub;
	
	printf("\nEnter A :  ");
	scanf("%d",&a);
	printf("\nEnter B :  ");
	scanf("%d",&b);
	
	sub = a-b;
	printf("\n-----------------------");
	printf("\nSubstraction is :  %d",sub);
	printf("\n-----------------------");
	
}

void multiplication()
{
	int a,b,mul;
	
	printf("\nEnter A :  ");
	scanf("%d",&a);
	printf("\nEnter B :  ");
	scanf("%d",&b);
	
	mul = a*b;
	printf("\n-------------------------");
	printf("\nMultiplication is :  %d",mul);
	printf("\n-------------------------");
		
}

void division()
{
	int a,b;
	float div;
	
	printf("\nEnter A :  ");
	scanf("%d",&a);
	printf("\nEnter B :  ");
	scanf("%d",&b);
	
	div = a/(float)b;
	printf("\n---------------------");
	printf("\nDivision is :  %.2f",div);
	printf("\n---------------------");
}
