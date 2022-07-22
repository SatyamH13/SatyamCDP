#include<iostream>
using namespace std;

class staticdemo{
	private:
		double length,breadth,height;
	public:
		static int oc ;
		
		staticdemo(double length,double breadth,double height)
		{
			cout<<"\nparameterized constructor called,"<<endl;
			this->length = length;
			this->breadth = breadth;
			this->height = height;
			oc++;
		}
		
		void volume()
		{
			cout<<"\n volume is "<<(length*breadth*height);
		}
		
};
int staticdemo::oc=0;

int main()
{
	staticdemo s1(5,6,7);
	s1.volume();
	cout<<"\nobject is "<<staticdemo::oc;
	return 0;
}
