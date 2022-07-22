#include<iostream>
using namespace std;

class base{
	public:
		int a;
		void getA()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a; 
		}
		void showA()
		{
			cout<<endl;
			cout<<"A = "<<a;
		}
};

class derived :public base{
	public:
		int b;
		void getB()
		{
			cout<<endl<<endl;
			cout<<"Enter B : ";
			cin>>b;
		}
		void showB()
		{
			cout<<endl;
			cout<<"B = "<<b;
		}
};

class derived1 :public derived{
	public:
		int c;
		void getC()
		{
			cout<<endl<<endl;
			cout<<"Enter C : ";
			cin>>c;
		}
		void showC()
		{
			cout<<endl;
			cout<<"C = "<<c;
		}
};

int main()
{
	derived1 a1;
	a1.getA();
	a1.showA();
	a1.getB();
	a1.showB();
	a1.getC();
	a1.showC();
	return 0;
}
