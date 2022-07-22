#include<iostream>
using namespace std;

class staticdemo{
	private:
		int p,q,r;
	public:
		static int objectcount;
	
		staticdemo(int p,int q,int r)
		{
			cout<<endl<<endl;
			cout<<"Parapeterized constructor called";
			this->p=p;
			this->q=q;
			this->r=r;
			objectcount++;
		}
		static int getcount()
		{
			return objectcount; 
		}
		
		void volume()
		{
			cout<<endl<<endl;
			cout<<"Volume is : "<<(p*q*r);
			cout<<endl<<endl;
		}
};
int staticdemo::objectcount=0;

int main()
{
	cout<<"Starting objct is "<<staticdemo::getcount();
   staticdemo a1(10,10,10);
   a1.volume();
    staticdemo a2(10,10,2);
   a2.volume();
    staticdemo a3(10,10,5);
   a3.volume();
   cout<<"Ending objct is "<<staticdemo::getcount();
	return 0;
}