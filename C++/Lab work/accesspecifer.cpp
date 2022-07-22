#include<iostream>
using namespace std;

class student{
	private:
		int sid;
		char name[10];
		protected:
		student()
		{
			sid = 5;
		}
		
		void getname()
		{
			cout<<endl;
			cout<<"Student Id   : "<<sid<<endl<<endl;
			cout<<"Enter Student Name : ";
			cin>>name;
		}
};

class sportsmark{
    private:
		int sp;
	protected:		
		sportsmark()
		{
			sp=78;
		}
		void spm()
		{
			cout<<endl;
			cout<<"Sports Mark  : "<<sp<<endl<<endl;
		}
};

class result :public student,public sportsmark{
	private:
	int sub1,sub2,sub3,total;
	float per;
	public:
	result()
	{
		sub1 = 75;
		sub2 = 70;
		sub3 = 82;
		total = sub1+sub2+sub3;
		per = total/(float)3;
	}
	
	void display()
	{
		getname();
		spm();
		
		cout<<endl;
		
		cout<<"Sub1 Mark    : "<<sub1<<endl<<endl;
		cout<<"Sub2 Mark    : "<<sub2<<endl<<endl;
		cout<<"Sub3 Mark    : "<<sub3<<endl<<endl;
		
		cout<<"Total Mark   : "<<total<<endl<<endl;
		cout<<"Percentage   : "<<per<<endl;
	}
};

int main()
{
	result a1;
	
	a1.display();
	
	return 0;
} 