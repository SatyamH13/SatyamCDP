#include<iostream>
using namespace std;

class Number{
	private:
	  int num1,num2;
	  friend int max(Number);
	
		public:
		void accept()
		{
			cout<<endl;
			cout<<"Enter No 1 : ";
			cin>>num1;
			cout<<endl;
			cout<<"Enter No 2 : ";
			cin>>num2;
			cout<<endl;
			
		}
};

int max(Number n1)
{
	
	if (n1.num1>n1.num2)
	{
		cout<<"Num 1 Is Greater";
	}
	else
	{
		cout<<"Num 2 Is Greater";
	}
	return 0;
} 

int main()
{
	Number n1;
	n1.accept();
	max(n1);
	
	return 0;
}