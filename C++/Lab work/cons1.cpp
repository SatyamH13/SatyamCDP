#include<iostream>
using namespace std;

class satyam{
	public:
		int a,b,c;
		satyam()
		{
			cout<<endl;
			cout<<"Default Constractor is Called.";
			a=10;
			b=10;
			c=5;
		}
		
		satyam(int p, int q, int r)
		{
			cout<<endl<<endl;
			cout<<"parameterized constractor is called.";
			a=p;
			b=q;
			c=r;
		}
		
		satyam(const satyam &l)
		{
			cout<<endl<<endl;
			cout<<"Copy Constructor is Called.";
			a=l.a;
			b=l.b;
			c=l.c;
		}
		
		void value()
		{
			cout<<endl<<endl;
			cout<<"Value is "<<a*b*c;
			cout<<endl<<endl;
			cout<<"+--+--+--+--+--+--+--+--+--+--+--+--+--+--+";
		}
};

int main()
{
	satyam a1;
	a1.value();
	satyam a2(10,10,10);
	a2.value();
	satyam a3(a1);
	a3.value();
	
	return 0;
}