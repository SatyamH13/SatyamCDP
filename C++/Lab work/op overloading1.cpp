#include<iostream>
using namespace std;

class OP{
	
	private:
		int a,b;
	public:
		OP(int a , int b)
		{
			this->a=a;
			this->b=b;
		}
		
	  	OP operator-()
		{
			this->a = -a;
			this->b = -b;
			return OP (a , b);
	    } 
		
		void print()
		{
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
		}
};

int main()
{
	OP o1(100,200);
	-o1;
	o1.print();
	return 0;
}