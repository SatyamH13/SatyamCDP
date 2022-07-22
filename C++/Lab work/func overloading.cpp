#include<iostream>
using namespace std;

class funcoverloading{
	
	public:
		int add(int a,int b)
		{
		   return a+b;	
		}
		
		int add(int a,int b,int c)
		{
			return a+b+c;
		}
};
	

int main()
{
	funcoverloading f1;
	cout<<"\n2 value"<<f1.add(10,20);
	cout<<"\n3 value"<<f1.add(10,20,30);
	return 0;
}