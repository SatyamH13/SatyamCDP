#include<iostream>
using namespace std;

class ABC{
	
	public:
		int p,q,r;
		
    ABC()
    {
    	cout<<endl;
    	cout<<"Default Constructor is Called";
    	p=100;
    	q=2;
    	r=5;
    	
	}
	
	ABC(int l,int s,int h)
	{
		cout<<endl<<endl;
		cout<<"Parameterized Constructor is Called";
		p=l;
		q=s;
		r=h;
		
	}
	ABC(const ABC &c)
	{
		cout<<endl<<endl;
		cout<<"Copy Constructor Called";
		p=c.p;
		q=c.q;
		r=c.r;
	}
	void value()
	{
		cout<<endl<<endl;
		cout<<"Value is "<<p*q*r;
	cout<<endl<<endl;
   	cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";	
	}
		
		
};

int main()
{
	ABC a1;
	a1.value();
	ABC a2(100,2,2);
	a2.value();
	ABC a3(a1);
	a3.value();
	return 0;
}