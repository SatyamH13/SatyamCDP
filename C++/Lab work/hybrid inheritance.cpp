#include<iostream>
using namespace std;

class Ab{
	public:
		int a=10,b=20;
		void print()
		{
		cout<<endl<<endl;
		cout<<"A = "<<a<<"\tB = "<<b;
		
	    }
		
};

class Cubea :virtual public Ab{
	public:
		int ca;
	void cube1()
	{
		
		ca=a*a*a;
		cout<<endl<<endl;
		cout<<"Cube A : "<<ca;
		
	}
};

class Cubeb:virtual public Ab{
	public:
		int cb;
	void cube2()
	{
		
		cb=b*b*b;
		cout<<endl<<endl;
		cout<<"Cube B : "<<cb;
		
	}
};

class Add :public Cubea , public Cubeb{
	public:
		
		 void addition()
		{
		   cout<<endl<<endl;
		   cout<<"Addition of Cube A And B : "<<ca+cb;	
		}
	
};


int main()
{
	
	Add a1;
	a1.print();
   a1.cube1();
    a1.cube2();
    a1.addition();
	
	return 0;
}