#include<iostream>
using namespace std;

class SATYAM{
	private:
		int money = 0;
		friend int DHARMIK(SATYAM);
};

int DHARMIK(SATYAM s)
{
	s.money += 10000;
	return s.money;
}

int main()
{
	SATYAM s;
	cout<<"Money Recieved : "<<DHARMIK(s);
	return 0;
}