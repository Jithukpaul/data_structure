#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void funct(int i)
{
		cout<<"funct:"<<i;
		cout<<"funct1:"<<i<<endl;
}
class thread_ob{
public:
	void operator()(int x)
	{	m.lock();
		for(int i=0;i<x;i++)
			cout<<"object:"<<i<<endl;
		m.unlock();
	}
};
int main()
{
	cout<<"threads started"<<endl;thread t[10];
	for(int i=0;i<5;i++)
		t[i]=thread(funct, i);
	thread t2(thread_ob(), 5);
	auto f=[](int x){
		for(int i=0;i<x;i++)
			cout<<"lambda:"<<i<<endl;
	};
	thread t3(f,5); 
	for(int i=0;i<5;i++)
	t[i].join();
	t2.join();
	t3.join();
	return 0;
}
