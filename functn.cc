#include<iostream>
using namespace std;
int sub(int b,int a){//pass by value and returning the copy
	return a-b;
}
void swap(int &a, int &b){//pass by reference
	int temp=a;
	a=b;b=temp;
}
inline int sum(int a, int b){
	return a+b;
}
int main()
{
	int a=58, b=67;
	cout<<"subtraction: "<<sub(a,b)<<endl;
	cout<<"Before swap a: "<<a<<" b- "<<b<<endl;
	swap(a,b);
	cout<<"swaped a: "<<a<<", b- "<<b<<endl;
	cout<<"addition: "<<sum(a,b);	//compiler copies the code here
	return 0;
}