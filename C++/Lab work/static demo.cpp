#include<iostream>
using namespace std;

class StaticDemo{
	private:
		int a,b,c;
	public:
		static int objectcount;
		StaticDemo(int a,int b,int c)
		{
			cout<<endl;
			cout<<"Parameterized Constructer Called.";
		    this->a=a;
			this->b=b;
			this->c=c;
			objectcount++;
		}
		static int getcount()
		{
			return objectcount;
		}
		
		void volume()
		{
			cout<<endl<<endl;
			cout<<"Volume is : "<<(a*b*c);
			cout<<endl;
		}
};
int StaticDemo::objectcount = 0;

int main()
{
	cout<<"Initial Object Count "<<StaticDemo::getcount();
	StaticDemo a1(10,5,5);
	a1.volume();
	StaticDemo a2(10,2,5);
	a2.volume();
	StaticDemo a3(10,4,5);
	a3.volume();
	
	cout<<"Final Object Count "<<StaticDemo::getcount();
	
	return 0;
}