#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,a,number;
	printf("\nEnter The Number Of Elements :  ");
	scanf("%d",&number);
	printf("\n%d %d ",n1,n2);
	
	for(a=0;a<number;a++)
	{  
	    n3=n1+n2;
		n1=n2;   
	    n2=n3;
	    
		
		printf("%d ",n3);
    }
	
}