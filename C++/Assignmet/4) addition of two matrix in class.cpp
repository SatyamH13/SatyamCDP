#include<iostream>
using namespace std;
class A{
	public:
		int a[3][3],b[3][3],c[3][3];
		void mat1()
		{
			cout<<endl;
			cout<<"+--+--+--+--+--+--+--+--+"<<endl;
			cout<<"ENTER ELEMENTS : 1"<<endl;
			cout<<"+--+--+--+--+--+--+--+--+"<<endl<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"Enter Element ["<<i<<"] ["<<j<<"] = ";
					cin>>a[i][j];
					cout<<endl;
				}
			}
			cout<<endl;
			cout<<"-------------------------"<<endl;
			cout<<" MATRIX ELEMENTS 1 ARE"<<endl;
			cout<<"-------------------------"<<endl<<endl;

		   	for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"   "<<a[i][j];	
				}
				cout<<endl;
			}
		}
		
		void mat2()
		{
			cout<<endl;
			cout<<"+--+--+--+--+--+--+--+--+"<<endl;
			cout<<"ENTER ELEMENTS : 2"<<endl;
			cout<<"+--+--+--+--+--+--+--+--+"<<endl<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"Enter Element ["<<i<<"] ["<<j<<"] = ";
					cin>>b[i][j];
					cout<<endl;
				}
			}
			cout<<endl;
			cout<<"-------------------------"<<endl;
			cout<<" MATRIX ELEMENTS 2 ARE"<<endl;
			cout<<"-------------------------"<<endl<<endl;

		   	for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"   "<<b[i][j];	
				}
				cout<<endl;
			}
			
		}
		
		void addition()
		{
			cout<<endl;
			cout<<"+--+--+--+--+--+--+--+--+--+--+"<<endl;
			cout<<" ADDITION OF ELEMENTS 1 AND 2"<<endl;
			cout<<"+--+--+--+--+--+--+--+--+--+--+"<<endl<<endl;

		   	for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					c[i][j] = a[i][j] + b[i][j];
					cout<<"   "<<c[i][j];	
				}
				cout<<endl;
			}
			
		}
		
	};
int main()
{
	A a1;
	a1.mat1();
	a1.mat2();
	a1.addition();
	return 0;
}