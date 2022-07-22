#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3];
	cout<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl<<endl;
	cout<<"Enter Matrix Number : 1"<<endl<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<endl;
			cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Matrix 1 Element are"<<endl;
    cout<<"-------------------------"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<"    "<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl<<endl;
	cout<<"Enter Matrix Number : 2"<<endl<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<endl;
			cout<<"Enter Element ["<<i<<"]["<<j<<"] : ";
			cin>>b[i][j];
		}
	}
	cout<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Matrix 2 Element are"<<endl;
    cout<<"-------------------------"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<"    "<<b[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Addition Of Matrix 1 And 2"<<endl;
    cout<<"-------------------------"<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout<<"    "<<c[i][j];
		}
		cout<<endl;
	}

	return 0;
}