#include<iostream>
using namespace std;
class Dist{
	int km;
	int m;
public:
	Dist(){}
	Dist(int km,int m):km(km),m(m){}
	Dist operator +(Dist &b){
		Dist c;
		c.km=km+b.km;
		c.m=m+b.m;
		return c;
	}
	void operator ++(){km++;}			//prefix
	void operator ++(int){km++;}		//postfix
	friend std::ostream &operator << (std::ostream &out, const Dist &d)//Overoading <<
	{
		out << d.km <<" "<<d.m<<endl;
		return out;
	}
};
int main(int argc, char const *argv[])
{
	Dist a(10,21);
	cout<<"Value of a: "<<a;
	++a;
	cout << "Preincrementing a: "<<a;
	a++;
	cout << "Postincrementing a: "<<a;	
	Dist b(20,32);cout<<"Value of b: "<<b;
	Dist c= a+b;
	cout<<"a+b= "<<c;
	return 0;
}