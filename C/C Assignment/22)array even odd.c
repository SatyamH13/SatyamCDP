#include<stdio.h>
void main()
{
	printf("\n--------------------");
	printf("\nENTER ELEMENTS");
	printf("\n--------------------");
	int a,i[10],even=0,odd=0;
	
	for(a=1;a<=10;a++)
	{
		printf("\n\nEnter array [%d] = ",a);
		scanf("%d",&i[a]);
	}
	printf("\n--------------------");
	printf("\nELEMENTS ARE");
	printf("\n--------------------");
	
	for(a=1;a<=10;a++)
	{
		printf("\n\narray [%d] = %d",a,i[a]);
		
		if(i[a] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n\neven number = %d",even);
	printf("\n\nodd number = %d",odd);
	
}