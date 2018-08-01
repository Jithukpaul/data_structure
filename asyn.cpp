#include<iostream>
#include<future>

using namespace std;

class handlr{
public:
	
	int fact(int a)
	{
		if(a==1)
			return 1;
		else
			return a*fact(a-1);
	}
	int sum (int a){
		if(a==1)
			return 1;
		else 
			return a+sum(a-1);
	}

};

int main()
{
	while(true)
	{
		cout<<"Enter the option:\n0:fact, 1:sum\n";
		int choice, temp;
		cin>>choice;
		handlr a;
		cout<<"Enter the number:";
		cin>>temp;
		auto f= std::bind(&handlr::fact,a,std::placeholders::_1);
		auto f2=std::bind(&handlr::sum,a,std::placeholders::_1);
		switch (choice)
		{
			case 0:	{
						auto fu=std::async(f,temp);
				   		cout<<"fact:"<<fu.get()<<endl;
				   	}
				   	break;
			case 1:	{
						std::future<int> fu1=std::async(f2,temp);
						cout<<"sum:"<<fu1.get()<<endl;
		    		}
		    		break;

		}
	}
	return 0;
}
