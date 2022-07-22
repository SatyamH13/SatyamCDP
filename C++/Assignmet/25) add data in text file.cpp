#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	ofstream outfile;
	outfile.open("a1.txt",ios::out);
	cout<<"Enter A :"<<endl;
	cin>>a;
	outfile<<a<<endl;

	
	outfile.open("a1.txt",ios::app);

	cout<<"Enter A : ";
	cin>>a;
	outfile<<a<<endl;
	cout<<"Data Apeended";
	outfile.close();
	
	return 0;
}