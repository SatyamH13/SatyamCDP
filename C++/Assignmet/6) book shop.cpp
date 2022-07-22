#include<iostream>
using namespace std;

class BOOK
{
	public:
	string name,title,publisher;
	int price;
	
	BOOK(string name,string title,string publisher,int price)
	{
		this->name=name;
		this->title=title;
		this->publisher=publisher;
		this->price=price;
	}
	
	void bookdetails()
	{
		cout<<endl;
		cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*"<<endl<<endl;
		cout<<"             PATEL BOOK STORE"<<endl<<endl;
		cout<<"*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*~~*"<<endl<<endl;
		
		cout<<"-------------------------------------------"<<endl;
		cout<<"        INFORMATION ABOUT THE BOOK"<<endl;
		cout<<"-------------------------------------------"<<endl<<endl<<endl;
		
		cout<<"--> Book Author     :  "<<name<<endl<<endl;
		cout<<"--> Book Title      :  "<<title<<endl<<endl;
		cout<<"--> Book Publisher  :  "<<publisher<<endl<<endl;
		cout<<"--> Book Price      :  "<<price<<endl;
	}
};

int main()
{
	BOOK a1("Nanditha Krishna","BELIEVE IN YOURSELF","Aleph Book Company",1000);
	a1.bookdetails();
	
	return 0;
}