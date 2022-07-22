#include<iostream>
using namespace std;

class A{
	public:
		int feet,inch;
		
		A(int f , int i)
		{
			feet=f;
			inch=i;
		}
		
		A operator-()
		{
			feet = -feet;
			inch = -inch;
			return A(feet,inch);
		} 
		
		void print()
		{
			cout<<endl;
			cout<<"feet : "<<feet<<"\ninch : "<<inch;
		}
};

int main()
{
	A a1(10,20);
	-a1;
	a1.print();
	
	
	return 0;
}