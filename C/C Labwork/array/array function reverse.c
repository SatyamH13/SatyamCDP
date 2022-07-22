#include<stdio.h>
int maximum(int arr[] , int s);
void main()
{
	int c,i,s,arr[50];
	printf("Enter The Size Of Array :");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	printf("\nEnter elements  =  ");
	scanf("%d",&arr[i]);
    }
    
    c=maximum(arr,s);
    printf("\nThe Max Number Is : %d",c);
}


int maximum(int arr[] , int s)
{
     int max, i;
     max = arr[0];
   	for(i=0;i<s;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	 return max;
} 