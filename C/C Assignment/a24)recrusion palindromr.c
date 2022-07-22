#include <stdio.h>

int reverse(int);
void main()
{
	int number ,sum;
  printf("Enter a number :");
  scanf("%d",&number);
  sum = reverse(number);
  if(number == sum)
  {
     printf("\nThe given number %d is a palindrome",number);
	 	
  }	
  else
  {
  	printf("\nThe given number %d is not a palindrome",number);
  	
  }
}
int reverse (int num)
{
	int rem;
	static int sum =0;
	if(num !=0)
	{
		rem = num%10;
		sum = sum*10 +rem;
		reverse(num/10);
	}
}