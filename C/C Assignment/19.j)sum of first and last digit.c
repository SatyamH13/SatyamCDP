#include<stdio.h>
int main()
{
	 int num,sum=0,lastdigit;
	 
	 printf("\nEnter a Number :  ");
	 scanf("%d",&num);
	 
	 lastdigit = num % 10;
	 
	 
	 
	 while(num >= 10)
	 {
	 	num = num / 10;
	 }
	 
	 sum= num + lastdigit;
	 
	 printf("\nSum Of First And Last Digit = %d",sum);
}