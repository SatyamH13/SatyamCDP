#include<iostream>
using namespace std;

template<typename A>
A add(A a,A b)
{
	return a + b;
} 

int main()
{
	cout<<"Integer : "<<add<int>(10,20)<<endl<<endl;
	cout<<"Float   : "<<add<float>(10.5f,20.4f)<<endl<<endl;
	cout<<"string  : "<<add<string>("abc","def");
	return 0;
}