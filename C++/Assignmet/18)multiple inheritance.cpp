#include<iostream>
using namespace std;

class PERSON{
	public:
		string member;
		int age;
		
		PERSON()
		{
			member = "Satyam Hirpara";
		    age = 21;

		}
};

class STUDENT{
	public:
		int s1,s2,s3,total;
		float per;
		STUDENT()
		{
			s1 = 70;
			s2 = 76;
			s3 = 69;
			total = s1+s2+s3;
			per = total/(float)3;
		}
};

class TEACHER : public PERSON , public STUDENT{
	public:
		int salary;
		TEACHER()
		{
			salary = 100000;
		}
		
		void read()
		{
			cout<<endl;
			cout<<"Name       : "<<member<<endl<<endl;
			cout<<"Age        : "<<age<<endl<<endl;
			cout<<"Percentage : "<<per<<endl<<endl;
		}
		
		void write()
		{
			cout<<"Salary     : "<<salary;
		}
	
};

int main()
{
	TEACHER t1;
	t1.read();
	t1.write();
	return 0;
}