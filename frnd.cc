#include<iostream>
using namespace std;
//Demonstration of friend function and friend class
//
class A{
private:
	int a;
public:
	A(int x):a(x){};
	// void printy(A &re);//member function declaration
	friend class B;
	friend void print(A &z);//friend function declaration using friend keyword so it can access even private member
};
class B{
public:
	void printFromB(A &z){
		cout<<"From friend class:";
		cout<<z.a<<endl;
	}
};
void print(A &z){//friend function definition 
	cout<<"From Friend Function:";
	cout<<z.a<<endl;
}
int main(int argc, char const *argv[])
{
	A z(43);
	print(z);
	B().printFromB(z);
	return 0;
}