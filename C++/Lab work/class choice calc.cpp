#include<iostream>
using namespace std;
class box{
	public:
	
	double a,b,c;
	
	box()
	{
		cout<<endl;
		cout<<"Default Constructor Called"<<endl;
		a=10;
		b=5;
		c=6;
	}
	void value1()
	{
		cout<<endl;
		cout<<"Value is "<<(a*b*c);
	}
	box(double a1,double b1,double c1)
	{
		cout<<"\n\nparameterized constructor called";
		a=a1;
		b=b1;
		c=c1;
	}
	void value2()
	{
		cout<<endl;
		cout<<"\nvalue is "<<a*b*c;
		
	}
	box(const box &b1)
	{
		cout<<"\n\ncopy constructor called"<<endl;
		a=b1.a;
		b=b1.b;
		c=b1.c;
	}
	
};
int main()
{
	box a1;
	a1.value1();
	box a2(10,2,2);
	a2.value2();
	box a3(a2);
	a3.value1();
	
	
	return 0;
}