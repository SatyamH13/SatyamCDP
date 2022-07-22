#include<iostream>
using namespace std;

class A{
	public:
		int num1;
		A(int n1)
		{
			num1 = n1;
		}
		
		void show()
		{
			cout<<"A = "<<num1;
		}
};

int main()
{
	A a1(10);
	a1.show();
	return 0;
}