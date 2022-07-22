#include<iostream>
using namespace std;
int add(int i , int j)
{
	return i + j;
}

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
	cout<<"A = "<<a<<"\tB = "<<b;
	
	cout<<endl<<endl;
	cout<<"Addition is "<<add(a,b);
	
	return 0;
}