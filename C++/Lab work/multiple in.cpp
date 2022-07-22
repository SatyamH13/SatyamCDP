#include<iostream>
using namespace std;

class student{
	private:
		char name[10];
		
	protected:
		void getname()
		{
			cout<<endl;
			cout<<"Enter Student Name : ";
			cin>>name;
		}
};

class eid{
	private:
		int eid;
	protected:
		void geteid()
		{
			cout<<endl;
			cout<<"Enter Student Id Number: ";
			cin>>eid;
		}
};

class result :public student ,public eid{
	private:
		int s1,s2,s3,total;
		float per;
	public:
		result(int s1,int s2,int s3)
		{
			this->s1=s1;
			this->s2=s2;
			this->s3=s3;
			total = s1+s2+s3;
			per = total/(float)3;
		}
		
		void display()
		{
			getname();
			geteid();
			cout<<endl;
			cout<<"Maths Mark : "<<s1<<endl;
			cout<<"Science Mark : "<<s2<<endl;
			cout<<"English Mark : "<<s3<<endl;
			cout<<"Total Marks : "<<total<<endl;
			cout<<"Percentage : "<<per<<endl;
			
		}
		
};

int main()
{
	result r1(67,78,77);
	r1.display();
	return 0;
}