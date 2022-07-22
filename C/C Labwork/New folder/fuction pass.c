#include<stdio.h>
void isprime(int no);
void main()
{
	int prime;
	
	printf("Enter Number : ");
	scanf("%d",&prime);
	
	isprime(prime);
}

void isprime(int no)
{
	int a,b=0;
	for(a=1;a<=no;a++)
	{
	   if(no % a ==0)
		{
			b++;
		}
	}
	if(b ==2)
	{
		printf("%d is prime",no);
	}
	else
	{
			printf("%d is not prime",no);
	}
	
	
	
	
}
