#include<iostream>
using namespace std;

inline int add(int i , int j)
{
	return i+j;
}

int main()
{
	int a=20,b=10;
	cout<<endl;
	cout<<"A = "<<a<<"\tB = "<<b;
	cout<<endl<<endl;
	cout<<"Addition = "<<add(a,b);
	return 0;
}