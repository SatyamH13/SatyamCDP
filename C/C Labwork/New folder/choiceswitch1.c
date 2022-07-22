#include<stdio.h>
int main()
{

int a, b, choice;
	float div;
	printf("\n----Choice Calculator------\n\n");
	printf("\nEnter A:  ");
	scanf("%d",&a);
	printf("\nEnter B:  ");
	scanf("%d",&b);
	printf("\nA = %d, B = %d", a, b); 
	printf("\n\n---Calc Menu----\n");
	printf("\n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication");
	printf("\n\nPlease Enter your choice ?\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :printf("\naddition is %d",a+b);
		        break;
		case 2 :printf("\nsubstraction is %d",a-b);
		        break;
		case 3 :printf("\ndivision is %.2f",a/(float)b);
		        break;
		case 4 :printf("\nmultiplication is %d",a*b);
                break;
		defult :printf("\ninvelid choice");
                break;      
    }           
}