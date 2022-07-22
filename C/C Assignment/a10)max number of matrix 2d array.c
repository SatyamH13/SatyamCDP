#include<stdio.h>
void main()
{
	int i,j,matrix[3][3],max;
	printf("\n-------------------------");
	printf("\nENTER MATRIX ELEMENTS");
	printf("\n-------------------------");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("\nENTER MATRIX [%d][%d]  =  ",i,j);
		  scanf("%d",&matrix[i][j]);	
		}
	}
	printf("\n-------------------------");
	printf("\nMATRIX ELEMENTS ARE");
	printf("\n-------------------------\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
	}
	max = matrix[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matrix[0][0] < matrix[i][j])
			{
				max = matrix[i][j];
			}
			
		}
	}
	
	printf("\n\nThe Max Number Is  :  %d",max);
	
	
}