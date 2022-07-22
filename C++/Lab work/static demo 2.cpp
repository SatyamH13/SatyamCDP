#include<iostream>
using namespace std;

int volume()
{
	static int a=10,b=2;
	
	a=a+b;
	
	cout<<endl<<endl;
	cout<<"volme is : "<<a;
	
	return 0;
	
}

int main()
{
	volume();
	volume();
	volume();
	
	return 0;
}