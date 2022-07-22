#include<iostream>
using namespace std;

class box{
	public:
		int	a,b,c;		 
		box()
		{
			cout<<"\nDefault Constructor Called";
			a=10;
			b=2;
			c=4;
		}
		
		box(int i, int j, int k)
		{
			cout<<"\n\nParameterized Constructor Called";
			a=i;
			b=j;
			c=k;
		}
		box(const box &i)
		{
			cout<<"\n\nCopy Constructor Called";
			a=i.a;
			b=i.b;
			c=i.c;
		}
		
		void volume()
		{
			cout<<"\nVolume is "<<a*b*c;
		}
		
		
	
};

int main()
{
	box a1;
	a1.volume();
	box a2(10,2,2);
	a2.volume();
	box a3(a2);
	a3.volume();
	return 0;
}