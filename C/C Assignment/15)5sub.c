#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	
	printf("\n---------------MARKS---------------\n");
	printf("\nScince Marks        :\t");
	scanf("%d",&sub1);
	printf("\nMaths Marks         :\t");
	scanf("%d",&sub2);
	printf("\nEnglish Marks       :\t");
	scanf("%d",&sub3);
	printf("\nHindi Marks         :\t");
	scanf("%d",&sub4);
	printf("\nSocial Scince Marks :\t");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	per=total/(float)5;
	
	printf("\nTotal               :\t%d",total);
	printf("\n\nPercentage          :\t%.2f",per);
	
	printf("\n---------------CLASS---------------\n");
	
	if(per > 75)
	{
		printf("\nClass               :\tDistination");
	}
	else if(per > 60)
	{
		printf("\nClass               :\tFirst Class");
	}
	else if(per > 50)
	{
		printf("\nClass               :\tSecond Class");
	}
	else if(per > 35)
	{
		printf("\nClass               :\tPass Class");
	}
	else
	{
		printf("\nClass               :\tFail");
	}
	
	
	
	
	
}