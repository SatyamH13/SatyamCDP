#include<iostream>
using namespace std;

class A
{
	public:
		int a,b,add,sub,mul;
		float div;
		
		A()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B : ";
			cin>>b;
			
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
		
			cout<<endl<<endl;
			add=a+b;
			cout<<"-----------------------"<<endl;
			cout<<"Addition is : "<<add<<endl;
			cout<<"-----------------------"<<endl;
			
			cout<<endl;
			sub=a-b;
			cout<<"-----------------------"<<endl;
			cout<<"Subtraction is : "<<sub<<endl;
			cout<<"-----------------------"<<endl;
			
			cout<<endl;
			mul=a*b;
			cout<<"-----------------------"<<endl;
			cout<<"Multiplication is : "<<mul<<endl;
			cout<<"-----------------------"<<endl;
			
			cout<<endl;
			div=a/(float)b;
			cout<<"-----------------------"<<endl;
			cout<<"Division is : "<<div<<endl;
			cout<<"-----------------------"<<endl;
        }
};

int main()
{
	A a1;

	return 0;
}