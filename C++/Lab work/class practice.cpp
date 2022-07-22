#include<iostream>
using namespace std;

class A{
	public:
int a=10,b=20,i=40,j=20;

	void accept1()
	{
		cout<<"\nA = "<<a;
		cout<<"\nB = "<<b;
	}
	void accept2()
	{
		cout<<"\nI = "<<i;
		cout<<"\nJ = "<<j;
	}
	
	
	
	void show1()
	{
		cout<<"\nAddition = "<<a+b;
		
	}
	void show2()
	{
		cout<<"\nAddition = "<<i+j;
	}
	
};
int main()
{
	A a1,b1;
	a1.accept1();
	a1.show1();
	b1.accept2();
	b1.show2();
}