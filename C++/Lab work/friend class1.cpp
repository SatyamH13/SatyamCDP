#include<iostream>
using namespace std;

class SATYAM{
	private:
		int money;
		friend class DHARMIK;
	public:	
	SATYAM()
	{
	 money = 50000;	
	}
};
class DHARMIK{
	private:
		int money1;
		public:
		DHARMIK()
		{
			money1 = 40000;
		}
		
	int give()
	{
	 SATYAM s;
	 return s.money + money1;	
	}
	
	
};

int main()
{
	DHARMIK d;
	cout<<"Money Recived : "<<d.give();
	return 0;
}