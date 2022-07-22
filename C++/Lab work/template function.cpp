#include<iostream>
using namespace std;

template<typename A>

A add(A a , A b)
{
	return a+b;
}

int main()
{
	
	cout<<"Integer : "<<add<int>(10,20)<<endl;
	cout<<"float   : "<<add<float>(2.5f,5.3f)<<endl;
	cout<<"String  : "<<add<string>("ab","cd")<<endl;
	return 0;
}