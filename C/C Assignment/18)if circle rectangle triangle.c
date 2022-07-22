#include<stdio.h>
int main()
{
	int choice,r,l,w,b,h;
	float area;
	printf("\n-----------------------");
	printf("\n# choice menu #");
	printf("\n-----------------------\n");
	printf("\n\n1 For Area Of Circle\n");
	printf("\n\n2 For Area Of Rectangle\n");
	printf("\n\n3 For Area Of Triangle\n");
	printf("\n----------------------------------------");
	printf("\nPlease Enter Your Choice :\t");
	scanf("%d",&choice);
	printf("----------------------------------------");
	
	if(choice == 1)
	{
		printf("\n\nEnter radious Of The Circle");
		printf("\n\nRadious :  ");
		scanf("%d",&r);
		
		area = 3.14*r*r;	
	}
	else if(choice == 2)
	{
		printf("\n\nEnter Length and Width Of The Rectangle");
		printf("\n\nLength : ");
		scanf("%d",&l);
		printf("\nWidth  : ");
		scanf("%d",&w);
		
		area = l*w;
	}
	else if(choice == 3)
	{
		printf("\n\nEnter The Base And Hight Of The Triangle");
		printf("\n\nBase  :  ");
		scanf("%d",&b);
		printf("\nHight :  ");
		scanf("%d",&h);
		
		area = (b*h) / 2;			
    }     
    else
    {
    	printf("\n\nInvelid Choice");
	}
	printf("\n----------------------------");
	printf("\nThe Area Is  :  %.2f",area);
	printf("\n----------------------------");
}