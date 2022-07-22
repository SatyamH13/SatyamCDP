#include<stdio.h>

void main()
{
	int a,i[11],max;
	printf("\n--------------------");
	printf("\nENTER ELEMENTS");
	printf("\n--------------------");
	
	for(a=0;a<11;a++)
	{
		printf("\n\nEnter Element [%d] = ",a);
		scanf("%d",&i[a]);
	}
	
	max = i[0];
	
	printf("\n--------------------");
	printf("\nELEMENTS");
	printf("\n--------------------");
	
	for(a=0;a<11;a++)
	{
		printf("\nElement [%d] = %d",a,i[a]);
		if(max < i[a])
		{
		  max = i[a];
		}
	}
	 printf("\n\nMax Number is %d",max);	
}
