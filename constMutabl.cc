#include<iostream>
using namespace std;
class A{
	int x=10;//const variables value cannot be changed
	mutable int y=20;
public:
	static int z;//cannot be initialized here
	//void printx()const{x++;cout<<"x:"<<x<<endl;}
	//shows error because const members cannot modify any variables.
	void printx(){cout<<"x:"<<x<<endl;}
	void printy()const{y++;cout<<"y:"<<y<<endl;}
	void printz(){z++;cout<<"z:"<<z<<endl;}
};
int A::z=30;//static variable should be initialized
int main(){
	A b;//normal object can call both const function aswellas const function
	b.printx();//10
	b.printy();//21
	b.printz();//31

	const A a;
	//a.printx();
	//const objects can only call const member functions.
	a.printy();//21
	A c;
	c.printz();//32-static variables are initialized only once so 32
}