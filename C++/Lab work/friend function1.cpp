#include<iostream>
using namespace std;

class A{
	private:
		int num1=10;
	friend int B(A);
};

int B(A a)
{
	int num2=20;
    a.num1 += num2;
	return a.num1;
}

int main()
{
	
	 A a;
	cout<<"NUM : "<<B(a);
	return 0;
}