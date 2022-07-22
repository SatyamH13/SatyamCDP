#include<iostream>
using namespace std;

class CRT{
	
	public:
		
		int display(double r)
		{
			return (3.14*r* r);
			
		}
		
		int display(int b , int h)
		{
			return (b*h)/2;
		}
	
    	int display(float l , float w)
		{
			return (l*w);
		}
};

int main()
{
	CRT *c = new CRT;
	cout<<endl;
	cout<<"1) Area Of Circle     : "<<c->display(10)<<endl<<endl;
	cout<<"2) Area Of Rectangles : "<<c->display(5,8)<<endl<<endl;
	cout<<"3) Area Of Triangles  : "<<c->display(15,13);
	return 0;
}