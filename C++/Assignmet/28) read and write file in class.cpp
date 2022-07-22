#include<iostream>
#include<fstream>
using namespace std;

class FH{
	public:
		string i;
	void accept()
	{
	
		
	ofstream write;
	write.open("satyam.txt",ios::out);

			
	cout<<endl;
	cin>>i;
	write<<i;
			
	ifstream read;
	read.open("satyam.txt",ios::in);
	cout<<endl;
	cout<<"File Is Reading."<<endl<<endl;
	read>>i;
	cout<<i;
	read.close();
}
};

int main()
{
	FH a1;
	a1.accept();

    
	
			
	return 0;
}