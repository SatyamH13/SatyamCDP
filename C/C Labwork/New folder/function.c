#include<stdio.h>
void func1();
void func2();
void main()
{
	func1();
	func2();
}

void func1()
{
	printf("function 1 called");
}

void func2()
{
	printf("\nfunction 2 called ");
}