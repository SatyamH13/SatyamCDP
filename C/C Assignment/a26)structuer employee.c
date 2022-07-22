#include<stdio.h>

struct employee{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e1;
void main()
{
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\n   ENTER EMPLOYEE INFORMATION\n");
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e1.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e1.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e1.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e1.age);
	
	printf("\n\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\n    EMPLOYEE INFORMATION ARE\n");
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	
	printf("\nEmployee Id Number        : %d",e1.empno);
	printf("\nEmployee Name             : %s",e1.empname);
	printf("\nEmployee Address          : %s",e1.address);
	printf("\nEmployee Age              : %.2f",e1.age);
}