#include<iostream>
using namespace std;

template<typename s>
s swap(s a , s b)
{
	int c;
	cout<<endl;
	cout<<"Before Swap A = "<<a<<"\tB = "<<b<<endl<<endl;
	c = a;
	a = b;
	b = c;
	cout<<"After Swpa A = "<<a<<"\tB = "<<b;
}

int main()
{
	 swap(10,20);
	return 0;
} 