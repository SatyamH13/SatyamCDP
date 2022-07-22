#include<iostream>
using namespace std;

class ASMD{
	
	public:
		
	void display(int a , int b , int c , int d)
	{
		cout<<endl;
		cout<<"Addition Is       : "<<a+b+c+d<<endl<<endl;
	}
	
	void display(double p , double q , double r)
	{
		cout<<"Subtraction Is    : "<<p-q-r<<endl<<endl;
	}
	
	void display(long double m , long double n , long double o , long double k , long double i)
	{
		cout<<"Multiplication Is : "<<m*n*o*k*i<<endl<<endl;
	}
	
	void display(float x ,float y)
	{
		cout<<"Division Is       : "<<x/(float)y;
	}
};

int main()
{
	ASMD a;
	a.display(10,20,30,10);
	a.display(15,5,5);
	a.display(5,2,2,2,2);
	a.display(50,22);
	
	return 0;
}