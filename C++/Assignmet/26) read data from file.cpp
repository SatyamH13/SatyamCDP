#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int a;
	
	ifstream file;
	file.open("a1.txt",ios::in);
	file>>a;
	cout<<endl;
	cout<<"file read."<<endl<<endl;
	cout<<a;
	return 0;
}