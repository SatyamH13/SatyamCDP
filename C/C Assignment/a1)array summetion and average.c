#include<stdio.h>
void main()
{
	int a,b,i[10],sum=0;
	float average;
	
	for(a=1;a<=10;a++)
	{
		printf("\nEnter Element [%d] = ",a);
		scanf("%d",&i[a]);
	}
	
    for(a=1;a<=10;a++)
    {
        printf("\nElement [%d] =",a,i[a]);
        
        sum=sum+i[a];
        average=sum/(float)10;
	}
	printf("\n\nThe sum is : %d",sum);
	printf("\n\nThe average is : %.2f",average);
	
	
	
	
}