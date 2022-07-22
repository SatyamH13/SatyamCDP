#include<stdio.h>
void sort(int *arr ,int n);
void main()
{
	int arr[5],n,i,a;
	
	printf("\nEnter The Size Of Array :  ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter element [%d] = ",i);
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
		for(a=0;a<n;a++)
	{
		printf("\n %d",*(arr+a));
	}
}

void sort(int *arr , int n)
{
	int a,b,c;
	
	for(a=0;a<n;a++)
	{
		for(b=a+1; b<n;b++)
		{
			if(*(arr+b) < *(arr+a))
			{
				c = *(arr+a);
				*(arr+a) = *(arr+b);
				*(arr+b) = c;
			}
		}
		
	}

}