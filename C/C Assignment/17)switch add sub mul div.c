#include<stdio.h>
int main()
{
	int a,b,choice;
	float per;
	
	
	
	printf("\nEnter A :\t");
	scanf("%d",&a);
	printf("\nEnter B :\t");
	scanf("%d",&b);
	printf("\nA = %d , B = %d",a,b);
	
	printf("\n\n---------------calc menu---------------\n");
	printf("\n\n1.Addition\n\n2.Subtraction\n\n3.Multiplication\n\n4.Division");
	printf("\n\nPlease Enter Your Choice :\t");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :printf("\nAddition : %d + %d = %d",a,b,(a+b));
		        break;
		case 2 :printf("\nSubstraction : %d - %d = %d",a,b,(a-b));
		        break;
		case 3 :printf("\nmultiplication : %d * %d = %d",a,b,(a*b));
		        break; 
		case 4 :if(b != 0)
		        {
		        	per=a/(float)b;
		        	printf("\nDivision : %d / %d = %.2f",a,b,per);
				}
				else
				{
					printf("\nNumber Can't be divided by 0");
				}
		        break;
	            default:printf("\nInvelid Choice");
				break;					       
				        
	}
	
	
}