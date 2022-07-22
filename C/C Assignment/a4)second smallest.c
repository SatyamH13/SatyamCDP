#include<stdio.h>
void main()
{
	int a,b,small,secondsmall,array[5];
	
	for(a=1;a<=5;a++)
	{
		printf(" Enter array [%d] = ",a);
		scanf("%d",&array[a]);	
	}
	
	for(a=1;a<=5;a++)
	{
		if( array[1]< array[2])
		{
			small=array[1];	
			secondsmall=array[2];		
		}
		else{
			small=array[2];
			secondsmall=array[1];
		}
		
	}
	for(a=2;a<=5;a++)
	{
		if(small>array[a])
		{
			secondsmall=small;
			small=array[a];
		}
		else if(secondsmall>array[a])
		{
			secondsmall=array[a];
		}
		
	}
	
	printf("\nSecond Small No Is %d",secondsmall);
}