#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<endl;
	cout<<"Enter A : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter B : ";
	cin>>b;
	cout<<endl;
	cout<<"Enter C : ";
	cin>>c;
	cout<<endl;
	cout<<"A = "<<a<<"\tB = "<<b<<"\tC = "<<c;
	cout<<endl<<endl;
	
	if(a > b)
	{
		if(a > c)
		{
			cout<<"A is grater";
		}
		else
		{
			cout<<"C is greater";
		}
	}
	else
	{
		if( b > c)
		{
			cout<<"B is greater";
		}
		else
		{
			cout<<"C is greater";
		}
	}

	return 0;
}