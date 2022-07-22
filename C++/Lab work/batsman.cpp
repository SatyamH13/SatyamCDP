#include<iostream>
using namespace std;

class Cricketer
{
	public:
		
		void heading()
		{
		cout<<endl;
		cout<<"*==*==*==*==*==*==*==*==*==*==*"<<endl;
		cout<<"        PLAYER DETAILS"<<endl;
		cout<<"*==*==*==*==*==*==*==*==*==*==*"<<endl<<endl;
	    }
};

class Batsman : public Cricketer
{
     public:
     	
     	void inputdata(string name,string role,string ba,int number,int age,int tm,int test,int tr,int t20,int t20runs,int odi,int odiruns,int ipl,int iplruns)
     	{
      		cout<<"Batsman Name  : "<<name<<endl<<endl;
     		cout<<"Role          : "<<role<<endl<<endl;
     		cout<<"Batting Style : "<<ba<<endl<<endl;
     		cout<<"Batsman No    : "<<number<<endl<<endl;
     		cout<<"Age           : "<<age<<endl<<endl<<endl;
     		
     		cout<<"*==*==*==*==*==*==*==*==*"<<endl;
	    	cout<<"      CRICKET CARRER"<<endl;
		    cout<<"*==*==*==*==*==*==*==*==*"<<endl<<endl;
		
     		cout<<"Total Match Played : "<<tm<<endl<<endl;
     		cout<<"Total Runs         : "<<tr+t20runs+odiruns+iplruns<<endl<<endl;
     		cout<<"Run Average        : "<<(tr+t20runs+odiruns+iplruns)/(float)tm<<endl<<endl<<endl;
     		
     		cout<<"*==*==*==*==*==*==*==*==*"<<endl;
	    	cout<<"       TEST CARRER"<<endl;
		    cout<<"*==*==*==*==*==*==*==*==*"<<endl<<endl;
		    
	        cout<<"TEST Played   : "<<test<<endl<<endl;
     		cout<<"TEST Runs     : "<<tr<<endl<<endl;
     		cout<<"Highest       : 159"<<endl<<endl;
     		cout<<"Average       : "<<tr/(float)test<<endl<<endl<<endl;
     		
     		cout<<"*==*==*==*==*==*==*==*==*"<<endl;
	    	cout<<"       T20 CARRER"<<endl;
		    cout<<"*==*==*==*==*==*==*==*==*"<<endl<<endl;
	
			cout<<"T20 Played    : "<<t20<<endl<<endl;
     		cout<<"T20 Runs      : "<<t20runs<<endl<<endl;
     		cout<<"Highest       : 65"<<endl<<endl;
     		cout<<"Average       : "<<t20runs/(float)t20<<endl<<endl<<endl;
     		
     		cout<<"*==*==*==*==*==*==*==*==*"<<endl;
	    	cout<<"       ODI CARRER"<<endl;
		    cout<<"*==*==*==*==*==*==*==*==*"<<endl<<endl;
	
     		cout<<"ODI Played    : "<<odi<<endl<<endl;
     		cout<<"ODI Runs      : "<<odiruns<<endl<<endl;
     		cout<<"Highest       : 85"<<endl<<endl;
     		cout<<"Average       : "<<odiruns/(float)odi<<endl<<endl<<endl;

     		cout<<"*==*==*==*==*==*==*==*==*"<<endl;
	    	cout<<"        IPL CARRER"<<endl;
		    cout<<"*==*==*==*==*==*==*==*==*"<<endl<<endl;
	
     		cout<<"IPL Played    : "<<ipl<<endl<<endl;
     		cout<<"IPL Runs      : "<<iplruns<<endl<<endl;
     		cout<<"Highest       : 128"<<endl<<endl;
     		cout<<"Average       : "<<iplruns/(float)ipl<<endl<<endl<<endl;
     		}
};

int main()
{
	Batsman b;
	b.heading();
	b.inputdata("Rishabh Pant","WK Batsman","Left Handed Bat",17,24,200,30,1920,48,741,24,715,98,2838);
	return 0;
}