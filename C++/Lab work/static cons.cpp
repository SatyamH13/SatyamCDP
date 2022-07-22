#include<iostream>
using namespace std;

class A
{
	private:
		int x,y,z;
		
	public:
		static int objectcount;
		
		A()
		{
			cout<<endl;
			cout<<"Default Constructor Called.";
			x=10;
			y=10;
			z=10;
			objectcount++;
		}
		
		A(int x,int y,int z)
		{
			cout<<endl<<endl;
			cout<<"Parameterized Constructor Called.";
			this->x=x;
			this->y=y;
			this->z=z;
			objectcount++;
		}
		
		A(const A &t)
		{
			cout<<endl<<endl;
			cout<<"Copy Constructor Called.";
			x=t.x;
			y=t.y;
			z=t.z;
			objectcount++;
		}
		
		static int getcount()
		{
			return objectcount;
		}
		
		void volume()
		{
			
			cout<<endl<<endl;
			cout<<"Volume is : "<<(x*y*z);
			cout<<endl<<endl;
			cout<<"--------------------------------";
		}
};

int A::objectcount=0;

int main()
{
	cout<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<"Starting Object is : "<<A::getcount()<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl<<endl;
	
	A a1;
	a1.volume();
	
	A a2(10,10,5);
	a2.volume();
	
	A a3(a1);
	a3.volume();
	
	cout<<endl<<endl<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	cout<<"End Object is : "<<A::getcount()<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	
	return 0;
}
