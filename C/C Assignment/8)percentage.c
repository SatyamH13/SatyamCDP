#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	printf("\n---------------SUBJECT MARKS---------------\n\n");
	
	printf("\nSCINCE MARKS        :\t");
	scanf("%d",&sub1);
	printf("\nMATHS MARKS         :\t");
	scanf("%d",&sub2);
	printf("\nENGLISH MARKS       :\t");
	scanf("%d",&sub3);
	printf("\nSOCIAL SCINCE MARKS :\t");
	scanf("%d",&sub4);
	printf("\nHINDI MARKS         :\t");
	scanf("%d",&sub5);	
	printf("\nSCINECE = %d , MATHS = %d , ENGLISH = %d , SOCIAL SCINCE = %d , HINDI = %d",sub1,sub2,sub3,sub4,sub5);
	
	total = sub1+sub2+sub3+sub4+sub5;
	per = total/(float)5;
	
	printf("\n\n---------------percentage------------------\n\n");
	
	printf("\nPERCENTAGE IS %d",per);
	
}