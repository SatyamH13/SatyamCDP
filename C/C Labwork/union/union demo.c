#include<stdio.h>
union student{
	char name[10];
	int roll;
	float per;
}s1;
void main()
{
	int size;
	
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\nSTUDENT INFORMATION ARE\n");
	printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	printf("\nEnter Studet Name      : ");
	scanf("%s",&s1.name);
	printf("\nStudent Name : %s",s1.name);
	printf("\n\n----------------------------------\n");
	printf("\nEnter Studet Roll No   : ");
	scanf("%d",&s1.roll);
	printf("\nStudent Roll No : %d",s1.roll);
	printf("\n\n----------------------------------\n");
	printf("\nEnter Studet Percetage : ");
	scanf("%f",&s1.per);
	printf("\nStudent Percentage : %.2f",s1.per);
	printf("\n\n----------------------------------\n");
	size = sizeof(s1);
	printf("\nStrucyuer Size Is %d Bytes",size);
	
}