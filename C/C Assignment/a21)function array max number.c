#include<stdio.h>
void maximum();
void main()
{
    maximum();
}


void maximum()
{
	int i,a,m[5],max;
	
	for(i=0;i<5;i++)
	{
	printf("\nEnter elements  =  ");
	scanf("%d",&m[i]);
    }
    
    max = m[0];
	for(i=0;i<5;i++)
	{
		if(max < m[i])
		{
			max = m[i];
		}
	}
	
	 printf("\nThe Max Number Is : %d",max);
} 