#include<iostream>
using namespace std;

class Base{
	public:
		virtual int func2();
		virtual int func4();
		int func1()
		{
			cout<<endl;
			cout<<"1) non pure virtual function 1 from base"<<endl<<endl;
			return 0;
		}
};

class Derived : public Base{
	public:
	
	int func2()
	{
		cout<<"2) pure virtual function 2 implimented frome derived class"<<endl<<endl;
		return 0;
	}
	int func3()
	{
		cout<<"3) non pure virtual function 3 frome derived class"<<endl<<endl;
		return 0;
	}
	int func4()
	{
		cout<<"4) pure virtual function 4 implimentd frome derived class";
		return 0;
	}
};

int main()
{
	Derived d;
	d.func1();
	d.func2();
	d.func3();
	d.func4();
	
	return 0;
} 