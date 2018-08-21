#include<iostream>
using namespace std;
class stud{
	string name;
	int age;
public:
	stud(string name,int age):name(name),age(age){}
	void show(){cout<<name<<" "<<age<<endl;}
	void operator ++(){age++;}			//prefix
	void operator ++(int){age++;}		//postfix
	friend std::ostream &operator << (std::ostream &out, const stud &d)//Overoading <<
	{
		out << d.name <<" "<<d.age<<endl;
		return out;
	}
};
int main(int argc, char const *argv[])
{
	stud a("s1",21);
	++a;
	cout << a;
	a++;
	cout << a;	
	return 0;
}