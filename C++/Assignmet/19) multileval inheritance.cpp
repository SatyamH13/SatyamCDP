#include<iostream>
using namespace std;

class STUDENT{
	public:
		
		string name;
		int rollno;
		
		STUDENT()
		{
			name ="Satyam Hirpara";
			rollno = 9;
		}
};

class TEST : public STUDENT{
	public:
		
		int sub1,sub2;
		
		TEST()
		{
			sub1 = 79;
			sub2 = 80;
		}
};

class RESULT : public TEST{
	public:
		
		int total;
		
		RESULT()
		{
			total = sub1+sub2;
		}
		
		void Display()
		{
			cout<<endl;
			cout<<"******************************"<<endl<<endl;
			cout<<"         STUDENT INFO"<<endl<<endl;
			cout<<"******************************"<<endl<<endl;
			cout<<"Student Name : "<<name<<endl<<endl;
			cout<<"Roll Number  : "<<rollno<<endl<<endl;
			cout<<"Sub 1 Marks  : "<<sub1<<endl<<endl;
			cout<<"Sub 2 Marks  : "<<sub2<<endl<<endl;
			cout<<"Total Marks  : "<<total;
			
		}
};

int main()
{ 
   RESULT r1;
   r1.Display();
   return 0;
}