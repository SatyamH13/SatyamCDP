#include<stdio.h>

struct student{
	char sname[10];
	int  roll;
	float per;
}s1;

struct employee{
	int id;
	char ename[10];
	float salary;
	
}e1;

void main()
{
	int choice,size;
	
	printf("\n-------------------------------");
	printf("\nCHOICE MENU");
	printf("\n-------------------------------\n");
	printf("\n(1) Student Details\n\n(2) employee Details");
	printf("\n\nPlease Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :printf("\n-------------------------------");
		        printf("\nENTER STUDENT DETAILS");
		        printf("\n-------------------------------");
		        printf("\n\nEnter Student Name       : ");
		        scanf("%s",&s1.sname);
		        printf("\nEnter Student Roll No    : ");
		        scanf("%d",&s1.roll);
		        printf("\nEnter Student Percentage : ");
		        scanf("%f",&s1.per);
		        
		        printf("\n-------------------------------");
		        printf("\nSTUDENT DETAILS ARE");
		        printf("\n-------------------------------");
		        printf("\n\nStudent Namevvvv         : %s",s1.sname);
		        printf("\n\nStudent Roll No          : %d",s1.roll);
		        printf("\n\nStudent Percentage       : %.2f",s1.per);
		        size = sizeof(s1);
				printf("\n\nStructure Size Is %d Bytes",size); 
		        break;
		
		case 2 :printf("\n-------------------------------");
		        printf("\nENTER EMPLOYEE DETAILS");
		        printf("\n-------------------------------\n");
		        printf("\nEnter Employee Id        : ");
		        scanf("%d",&e1.id);
		        printf("\nEnter Employee Name      : ");
		        scanf("%s",&e1.ename);
		        printf("\nEnter Employee salary    : ");
		        scanf("%f",&e1.salary);
		        
		        printf("\n-------------------------------");
		        printf("\nEMOLOYEE DETAILS ARE");
		        printf("\n-------------------------------");
		        printf("\n\nEmployee Id              : %d",e1.id);
		        printf("\n\nEmployee Name            : %s",e1.ename);
		        printf("\n\nEmployee salary          : %.2f",e1.salary);
		        size = sizeof(e1);
				printf("\n\nStructure Size Is %d Bytes",size); 
				break;  
		
		default :printf("\nInvalid Choice");
		        break;		     
	}
	
	
}