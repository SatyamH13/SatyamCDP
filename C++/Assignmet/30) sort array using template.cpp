#include<iostream>
using namespace std;

template <class A>

class Sort{
	
	public:
	A arr[10],a,b,c,n;
		
	void acceept()
	{
		cout<<"enter size of array : ";
		cin>>n;
		
			for(a=0;a<n;a++)
			{
				cout<<endl;
			    cout<<"Enter Elements ["<<a<<"] = " ;
			    cin>>arr[a];
		    }
		    
		    for(a=0;a<n;a++)
		    {
		    	for(b=a+1;b<n;b++)
		    	{
		    		if(arr[a]>arr[b])
		    		{
		    			c=arr[a];
		    			arr[a]=arr[b];
		    			arr[b]=c;
				    }
			    }
				cout<<"Sort Elements Is : "<<arr[a]<<endl;
			}
	}
};

int main()
{
	Sort <int>s;
	s.acceept();
	return 0;
}
		
           
            