#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	
	cout<<endl;
	cout<<"Enter A : ";
	cin>>a;
	cout<<endl;
	cout<<"Enter B : ";
	cin>>b;
    cout<<endl;
	cout<<"A = "<<a<<"\tB = "<<b;
	cout<<endl;
	cout<<"\n----------------";
	cout<<"\nCHOICE MENU";
	cout<<"\n----------------";
	cout<<endl<<endl;
	cout<<"1)Addition\n\n2)Subtraction\n\n3)Multiplication\n\n4)division";
	cout<<endl<<endl;
	cout<<"----------------";
	cout<<endl<<endl;
	cout<<"Please Enter Your Choice : ";
	cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 1 :cout<<"Addition is "<<(a+b);
		        break;
		case 2 :cout<<"Subtraction is "<<(a-b);
		        break;
		case 3 :cout<<"multiplication is "<<(a*b);
		        break;
		case 4 :cout<<"division is "<<(a/(float)b);	
		        break;
		default :cout<<"Invalid Choice";	        
		
	}
	
	return 0;
}