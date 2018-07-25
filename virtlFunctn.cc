#include<iostream>
using namespace std;
class A{						//if we want to restrict a class from inheriting use final
public:
	 virtual void ans(int a,int b){//if we want to restrict a function from getting overridden use 'final' keyword
		cout<<"a+b="<<a+b;
	}
};
class B:public A{
public:
	 void ans(int a, int b){//we can specify it as an overriden function by specifying 'override' keyword,so if it doesnt 
		cout<<"a*b= "<<a*b; //override then it returns an error
	}//to ignore virtualization and call bse class functn call "A::ans(a,b);"
};
int main()//if we try to call method using A's ref object refering to B call goes to B,
{
	B obj;
	A &obj1=obj;
	int a,b;
	cin>>a>>b;
	obj1.ans(a,b);//calls method of B
	return 0;
}