#include<iostream>
using namespace std;
class S{
	public:
		int a,b,add,sub,mul;
		float div;
		
		void accept()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B : ";
			cin>>b;
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
		}
		
		void addition()
		{
			cout<<endl<<endl;
			add = a + b;
			cout<<"Addition       = "<<add;
		}
		
		void subtraction()
		{
			cout<<endl<<endl;
			sub = a - b;
			cout<<"Subtraction    = "<<sub;
		}
		
		void multiplication()
		{
			cout<<endl<<endl;
			mul = a * b;
			cout<<"multiplication = "<<mul;
		}
			
		void division()
		{
			cout<<endl<<endl;
			div = a / (float) b;
			cout<<"division       = "<<div;
		}
};

	

int main()
{
	S a1;
	a1.accept();
	a1.addition();
	a1.subtraction();
	a1.multiplication();
	a1.division();
	return 0;
}