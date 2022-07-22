#include<stdio.h>
struct student1{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s1;
struct student2{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s2;
struct student3{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s3;
struct student4{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s4;
struct student5{
	int rollno;
	int sub1;
	int sub2;
	int sub3;
	int total;
	float per;
}s5;

void main()
{
	printf("\n-------------------------");
	printf("\nENTER STUDENT INFO");
	printf("\n-------------------------");
	printf("\n\nStudent Number        : (1)");
	printf("\n\nEnter Student Roll No : ");
	scanf("%d",&s1.rollno);
	printf("\nEnter Maths Mark      : ");
	scanf("%d",&s1.sub1);
	printf("\nEnter Science Mark    : ");
	scanf("%d",&s1.sub2);
	printf("\nEnter English Mark    : ");
	scanf("%d",&s1.sub3);
	
	printf("\n---------------------------\n");
	
	printf("\n\nStudent Number        : (2)");
	printf("\n\nEnter Student Roll No : ");
	scanf("%d",&s2.rollno);
	printf("\nEnter Maths Mark      : ");
	scanf("%d",&s2.sub1);
	printf("\nEnter Science Mark    : ");
	scanf("%d",&s2.sub2);
	printf("\nEnter English Mark    : ");
	scanf("%d",&s2.sub3);
	
	printf("\n---------------------------\n");
	
	printf("\n\nStudent Number        : (3)");
	printf("\n\nEnter Student Roll No : ");
	scanf("%d",&s3.rollno);
	printf("\nEnter Maths Mark      : ");
	scanf("%d",&s3.sub1);
	printf("\nEnter Science Mark    : ");
	scanf("%d",&s3.sub2);
	printf("\nEnter English Mark    : ");
	scanf("%d",&s3.sub3);
	
	printf("\n---------------------------\n");
	
	printf("\n\nStudent Number        : (4)");
	printf("\n\nEnter Student Roll No : ");
	scanf("%d",&s4.rollno);
	printf("\nEnter Maths Mark      : ");
	scanf("%d",&s4.sub1);
	printf("\nEnter Science Mark    : ");
	scanf("%d",&s4.sub2);
	printf("\nEnter English Mark    : ");
	scanf("%d",&s4.sub3);
	
	printf("\n---------------------------\n");
	
	printf("\n\nStudent Number        : (5)");
	printf("\n\nEnter Student Roll No : ");
	scanf("%d",&s5.rollno);
	printf("\nEnter Maths Mark      : ");
	scanf("%d",&s5.sub1);
	printf("\nEnter Science Mark    : ");
	scanf("%d",&s5.sub2);
	printf("\nEnter English Mark    : ");
	scanf("%d",&s5.sub3);
	
	printf("\n\n-------------------------");
	printf("\nSTUDENT INFO ARE");
	printf("\n-------------------------");
	
	printf("\n\nStudent Number  : (1)");
	printf("\nStudent Roll No : %d",s1.rollno);
	printf("\nMaths Mark      : %d",s1.sub1);
	printf("\nScience Mark    : %d",s1.sub2);
	printf("\nEnglish Mark    : %d",s1.sub3);
	
	s1.total = s1.sub1 + s1.sub2 + s1.sub3;
	printf("\nTotal Marks     : %d",s1.total);
	
	s1.per = s1.total / (float)3;
	printf("\nPercentage      : %.2f",s1.per);
	
	printf("\n---------------------------\n");
	
	printf("\nStudent Number  : (2)");
	printf("\nStudent Roll No : %d",s2.rollno);
	printf("\nMaths Mark      : %d",s2.sub1);
	printf("\nScience Mark    : %d",s2.sub2);
	printf("\nEnglish Mark    : %d",s2.sub3);
	
	s2.total = s2.sub1 + s2.sub2 + s2.sub3;
	printf("\nTotal Marks     : %d",s2.total);
	
	s2.per = s2.total / (float)3;
	printf("\nPercentage      : %.2f",s2.per);
	
	printf("\n---------------------------\n");
	
	printf("\nStudent Number  : (3)");
	printf("\nStudent Roll No : %d",s3.rollno);
	printf("\nMaths Mark      : %d",s3.sub1);
	printf("\nScience Mark    : %d",s3.sub2);
	printf("\nEnglish Mark    : %d",s3.sub3);
	
	s3.total = s3.sub1 + s3.sub2 + s3.sub3;
	printf("\nTotal Marks     : %d",s3.total);
	
	s3.per = s3.total / (float)3;
	printf("\nPercentage      : %.2f",s3.per);
	
	printf("\n---------------------------\n");
	
	printf("\nStudent Number  : (4)");
	printf("\nStudent Roll No : %d",s4.rollno);
	printf("\nMaths Mark      : %d",s4.sub1);
	printf("\nScience Mark    : %d",s4.sub2);
	printf("\nEnglish Mark    : %d",s4.sub3);
	
	s4.total = s4.sub1 + s4.sub2 + s4.sub3;
	printf("\nTotal Marks     : %d",s4.total);
	
	s4.per = s4.total / (float)3;
	printf("\nPercentage      : %.2f",s4.per);

   	printf("\n---------------------------\n");
	
	printf("\nStudent Number  : (5)");
	printf("\nStudent Roll No : %d",s5.rollno);
	printf("\nMaths Mark      : %d",s5.sub1);
	printf("\nScience Mark    : %d",s5.sub2);
	printf("\nEnglish Mark    : %d",s5.sub3);
	
	s5.total = s5.sub1 + s5.sub2 + s5.sub3;
	printf("\nTotal Marks     : %d",s5.total);
	
	s5.per = s5.total / (float)3;
	printf("\nPercentage      : %.2f",s5.per);

}
