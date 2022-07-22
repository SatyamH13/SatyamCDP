#include<iostream>
using namespace std;

class A{
	public:
		int a[3][3];
		void accept()
		{
			cout<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"      ENTER A MATRIX"<<endl;
			cout<<"---------------------------"<<endl<<endl;
			
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"Enter Element ["<<i<<"] ["<<j<<"] = ";
					cin>>a[i][j];
					cout<<endl;
				}
			}
		}
		
		void show()
		{
			cout<<endl;
			cout<<"---------------------------"<<endl;
			cout<<"    MATRIX ELEMENTS ARE"<<endl;
			cout<<"---------------------------"<<endl<<endl;
			
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"\t"<<a[i][j];
				}
				cout<<endl;
			}
			
		}
		
};

int main()
{
	A a1;
	a1.accept();
	a1.show();
	return 0;
}