#include<iostream>
using namespace std;
void print(int a){
	cout<<"Printing an integer value: "<<a<<endl;
}
void print(double a){
	cout<<"Printing a float value: "<<a<<endl;
}
void print(char* a){
	cout<<"Printing a char valuea: "<<a<<endl;
}
int main()
{
	print(12);
	print(1.2);
	print("c++");
	return 0;
}