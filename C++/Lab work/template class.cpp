#include<iostream>
using namespace std;

template <class a>

class Num{
	public:
	     a num1;
	   Num(a n1)
	   {
	   	num1 = n1;
	   }
	
	  void add()
	  {
	  	cout<<"A = "<<num1;
	  } 
};

int main()
{
	Num<int>n(10);
	n.add();
	Num<float>j(10.5f);
	j.add();
	
}

