#include<stdio.h>
void function1();
void function2();
void addarray();
void main()
{
	int choice;
	
	printf("\n\n1.function 1\n\n2.function 2\n\n3.add array");
	printf("\n------------------------------");
	printf("\nPLEASE ENTER YOUR CHOICE :  ");
	scanf("%d",&choice);
	printf("------------------------------");
	
	switch(choice)
	{
		case 1 :function1();
		        break;
		case 2 :function2();
		        break;
		case 3 :addarray();
		        break;
		default:printf("Invalid choice");
		        break;				        
	}
	 
	
}
void function1()
{
	printf("\n\nfunction 1 called");
	
}

void function2()
{
	printf("\n\nfunction 2 called");
	
}

void addarray()
{
	int a,arr1[5],arr2[5],res[5];
	
	printf("\n----------------------------");
	printf("\nENTER ELEMENTS 1st ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		printf("\n\nEnter A [%d] = ",a);
		scanf("%d",&arr1[a]);
	}
	
	printf("\n----------------------------");
	printf("\nENTER ELEMENTS 2nd ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		printf("\n\nEnter A [%d] = ",a);
		scanf("%d",&arr2[a]);
	}
	
	printf("\n----------------------------");
	printf("\nADDITION OF 2 ARRAY");
	printf("\n----------------------------");
	
	for(a=1;a<=5;a++)
	{
		res[a] = arr1[a] + arr2[a];
		printf("\n\nResult [%d] = %d",a,res[a]); 	
	}
	
}	
	