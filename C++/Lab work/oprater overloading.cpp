#include<iostream>
using namespace std;

class Distance
{
	private:
		int feet,inches;
	public:
	
		Distance(int f ,int i)
		{
			feet=f;
			inches=i;
		}
		
		Distance operator-()
		{
			feet = -feet;
			inches = -inches;
			return Distance(feet,inches);
		}
		
		
		void print()
		{
			cout<<endl;
			cout<<"feet : "<<feet<<"\tinches : "<<inches;
		}
		
		
		
};

int main()
{
	Distance d1(10,20);
	-d1;
	d1.print();
	
	
	
	return 0;
	
}