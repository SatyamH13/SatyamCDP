#include<stdio.h>
void main()
{
	int n,i;
	int *p;
	printf("\nHow Many Elements You Want To Store : ");
	scanf("%d",&n);
	
	p=(int*) malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Elements [%d] = ",i);
		scanf("%d",p+i);
	}
	
	printf("\n--------------ELEMENTS ARE--------------\n");
	for(i=0;i<n;i++)
	{
		printf("\n Elements [%d] = %d",i,*(p+i));
	}
	
	
	
	
}