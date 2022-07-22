#include<iostream>
using namespace std;

class Dharmik{
	private: 
	int money;
	friend class Satyam;
	public:
		Dharmik()
		{
			money = 10000;
		}
};

class Satyam{
	private:
		int money1;
	public:
		Satyam()
		{
			money1=40000;
		}
			
		int give()
		{
			Dharmik d;
			return d.money+money1;
		}
};

int main()
{
	Satyam s;
	cout<<"Money Recived"<<s.give();
	return 0;
}