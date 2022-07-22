#include<iostream>
using namespace std;

class A{
	public:
	int a,b,c;
	
	A()
	{
		a=10;
		b=20;
		c=30;
	}
	
	void display()
	{
		cout<<endl;
		cout<<"A = "<<a<<endl<<endl;
		cout<<"B = "<<b<<endl<<endl;
		cout<<"C = "<<c<<endl<<endl;
		
	}
};

int main()
{
	A *a = new A;
	a->display();
	
	return 0;
}