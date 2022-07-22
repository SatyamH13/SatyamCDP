#include<stdio.h>
struct employ{
	int eid;
	char name[10];
	float sal;
}e1;
void main()
{
   printf("\n-----------------");
   printf("\nEMPLOY DETAIL");
   printf("\n-----------------");
   printf("\n\nEnter ID     :  ");
   scanf("%d",&e1.eid);
   printf("\nEnter Name   :  ");
   scanf("%s",&e1.name);
   printf("\nEnter Salary :  ");
   scanf("%f",&e1.sal);
   
   printf("\n-----------------");
   printf("\nEMPLOY INFO");
   printf("\n-----------------");
   printf("\n\nID Number :  %d",e1.eid);
   printf("\n\nName      :  %s",e1.name);
   printf("\n\nSalary    :  %.2f\n",e1.sal);
   
}