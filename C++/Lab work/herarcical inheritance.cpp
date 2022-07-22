#include<iostream>
using namespace std;

class ADD{
	public:
		int a=10;
		void print()
		{
		
		cout<<endl;
		cout<<"A = "<<a;
	    }
};

class SQUARE :public ADD{
	public:
	void square()
	{
	
	cout<<endl;
	cout<<"Square Is : "<<(a*a);
    }
};
class CUBE :public ADD{
	public:
	void cube()
	{
	
	cout<<endl;
	cout<<"Cube Is : "<<(a*a*a);
    }
};

int main()
{
	SQUARE s1;
	CUBE c1;
	s1.print();
	s1.square();
	c1.cube();
	
	
	
	
	return 0;
}