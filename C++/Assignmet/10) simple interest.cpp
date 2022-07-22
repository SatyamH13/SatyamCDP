#include<iostream>
using namespace std;

class SI{
	public:
		int pa;
		float simpleinterest,rate,year;
		SI()
		{
			rate = 2.5;
		}
		
		 void accept()
		{
			cout<<endl;
			cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl;
			cout<<"         SIMPLE INTEREST"<<endl<<endl;
			cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl<<endl<<endl;
			cout<<"Enter Principal Amount : ";
			cin>>pa;
			cout<<endl<<endl;
			cout<<"Enter Year             : ";
			cin>>year;
			cout<<endl<<endl;
			cout<<"Rate                   : "<<rate;
			cout<<endl<<endl<<endl;
			cout<<"Simple Interest        : "<<(pa*year*rate)/(float)100;
			
		}
};

int main()
{
	SI s1;
	s1.accept();
	return 0;
}