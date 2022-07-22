#include<iostream>
using namespace std;

template <class D>

class NUM{
	
	public:
		D  num1;
		NUM(D n1)
		{
			num1=n1;
		}
		
		void show()
		{
			cout<<"\nA : "<<num1;
		}
};

int main()
{
	NUM <int>in(10);
	in.show();
	NUM <float>fn(25.5f);
	fn.show();
	
}