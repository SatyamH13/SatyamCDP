#include<iostream>
using namespace std;

class P{
	private:
		int money;
		friend class Q;
	public:
		P()
		{
			money=10000;
		}
		
};

class Q{
	private:
		int money1;
	public:	
		Q()
		{
			money1=10000;
		}
	
	int give()
	{
		P p;
		p.money += money1;
		return p.money;
    } 	
};
	  

int main()
{
	Q q;
	cout<<"Money Recived : "<<q.give();
	return 0;
}