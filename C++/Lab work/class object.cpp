#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
	int accept1()
	{
		cout<<endl;
		cout<<"Enter A : ";
		cin>>a;
		return 0;
	}
	
	int show1()
	{
		cout<<endl;
	cout<<"A = "<<a;
		return 0;
	}
	
	int accept2()
	{
		cout<<endl<<endl;
		cout<<"Enter B : ";
		cin>>b;
		return 0;
	}

	int show2()
	{
		cout<<endl;
	cout<<"B = "<<b;
		return 0;
	}
	
	
	
};
int main()
{
	A a1;
	a1.accept1();
	a1.show1();
	a1.accept2();
	a1.show2();
	return 0;
}