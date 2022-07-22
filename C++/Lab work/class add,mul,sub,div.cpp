#include<iostream>
using namespace std;

class S{
	public:
		int a,b;
		void accept()
		{
			cout<<endl;
			cout<<"Enter A : ";
			cin>>a;
			cout<<endl;
			cout<<"Enter B : ";
			cin>>b;
		}
		void show()
		{
			cout<<endl;
			cout<<"A = "<<a<<"\tB = "<<b;
			cout<<endl<<endl;
			cout<<"---------------------------";
		}
		
		void asmd()
		{
			cout<<endl<<endl;
			cout<<"Addition       = "<<a+b;
			cout<<endl<<endl;
			cout<<"Subtraction    = "<<a-b;
			cout<<endl<<endl;
			cout<<"multiplication = "<<a*b;
			cout<<endl<<endl;
			cout<<"Division       = "<<a/(float)b;
		}
};
int main()
{
	S a;
	a.accept();
	a.show();
	a.asmd();
	
	return 0;
	
}