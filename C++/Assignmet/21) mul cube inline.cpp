#include<iostream>
using namespace std;

class IN{
	public:
		
		int mul,a,b,ca,cb;
		
		inline void display()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl<<endl;
			cout<<"Enter B : ";
			cin>>b;
			cout<<endl<<endl;
			
			cout<<"A = "<<a<<"\tB = "<<b<<endl<<endl<<endl;
			
			mul = a * b;
			cout<<"Multiplication Is : "<<mul<<endl<<endl<<endl;
			
			ca = a*a*a;
			cout<<"Cube A : "<<ca<<endl<<endl<<endl;
			
			cb = b*b*b;
			cout<<"Cube B : "<<cb<<endl<<endl;
		}
};

int main()
{
	IN i;
	i.display();
	return 0;
}