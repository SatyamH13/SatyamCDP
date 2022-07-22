#include<stdio.h>

struct employee{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e1;
struct employee1{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e2;
struct employee2{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e3;
struct employee3{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e4;
struct employee4{
	int empno;
	char empname[20];
	char address[20];
	float age;
}e5;
	void main()
	{
	
	printf("\n---------------------------------\n");
	printf("\n   ENTER EMPLOYEE INFORMATION\n");
	printf("\n---------------------------------\n");
	
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e1.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e1.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e1.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e1.age);
	
	printf("\n---------------------------------\n");
	
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e2.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e2.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e2.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e2.age);
	
	printf("\n---------------------------------\n");
	
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e3.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e3.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e3.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e3.age);
	
	printf("\n---------------------------------\n");
	
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e4.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e4.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e4.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e4.age);
	
	printf("\n---------------------------------\n");
	printf("\nEnter Employee Id Number  :  ");
	scanf("%d",&e5.empno);
	printf("\nEnter Employee Name       :  ");
	scanf("%s",&e5.empname);
	printf("\nEnter Employee Address    :  ");
	scanf("%s",&e5.address);
	printf("\nEnter Employee Age        :  ");
	scanf("%f",&e5.age);
    
    
     
    
    
	printf("\n\n---------------------------------\n");
	printf("\n    EMPLOYEE INFORMATION ARE\n");
	printf("\n---------------------------------\n");
	
	
	
	
	printf("\nEmployee Id Number        : %d",e1.empno);
	printf("\nEmployee Name             : %s",e1.empname);
	printf("\nEmployee Address          : %s",e1.address);
	printf("\nEmployee Age              : %.2f",e1.age);
	printf("\n---------------------------------\n");
	
	printf("\nEmployee Id Number        : %d",e2.empno);
	printf("\nEmployee Name             : %s",e2.empname);
	printf("\nEmployee Address          : %s",e2.address);
	printf("\nEmployee Age              : %.2f",e2.age);
	printf("\n---------------------------------\n");
	
	printf("\nEmployee Id Number        : %d",e3.empno);
	printf("\nEmployee Name             : %s",e3.empname);
	printf("\nEmployee Address          : %s",e3.address);
	printf("\nEmployee Age              : %.2f",e3.age);
	printf("\n---------------------------------\n");
	
	printf("\nEmployee Id Number        : %d",e4.empno);
	printf("\nEmployee Name             : %s",e4.empname);
	printf("\nEmployee Address          : %s",e4.address);
	printf("\nEmployee Age              : %.2f",e4.age);
	printf("\n---------------------------------\n");
	
	printf("\nEmployee Id Number        : %d",e5.empno);
	printf("\nEmployee Name             : %s",e5.empname);
	printf("\nEmployee Address          : %s",e5.address);
	printf("\nEmployee Age              : %.2f",e5.age);
	printf("\n---------------------------------\n");
     
    
}