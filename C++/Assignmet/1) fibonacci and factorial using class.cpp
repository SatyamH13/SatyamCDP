#include<iostream>
using namespace std;

class A{
	public:
		
		void fibonacci()
		{
			int a,n,n3,n1=0,n2=1;
			cout<<endl;
			cout<<"-----------------------"<<endl;
			cout<<"FIBONACCI SERIES"<<endl;
			cout<<"-----------------------"<<endl<<endl;
			cout<<"Enter a Number : ";
			cin>>n;
			cout<<endl;
			cout<<n1;
			cout<<"  "<<n2;
			for(a=2;a<=n;a++)
			{
				
				n3=n1+n2;
				n1=n2;
				n2=n3;
				cout<<"  "<<n3;
			}	
		}
		
		void factorial()
		{
			int fact=1,a,n;
			
			cout<<endl<<endl;
			cout<<"-----------------------"<<endl;
			cout<<"FACTORIAL NUMBER"<<endl;
			cout<<"-----------------------"<<endl<<endl;
			cout<<"Enter a Number : ";
			cin>>n;
			for(a=1;a<=n;a++)
			{
				fact=fact*a;
			}
			cout<<endl;
			cout<<"Factorial of "<<n<<" is : "<<fact;
		}
};
	

int main()
{
	A a1;
	a1.fibonacci();
	a1.factorial();
	return 0;
}