#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	
	ofstream outfile;
	outfile.open("a1.txt",ios::out);
	cout<<endl;
	cout<<"Enter A : ";
	cin>>a;
	outfile<<a;
	
	ifstream infile;
	infile.open("a1.txt",ios::in);
	cout<<endl;
	cout<<"Reading From File."<<endl<<endl;
	infile>>a;
	cout<<a;
    infile.close();
	return 0;
}