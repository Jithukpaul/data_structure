#include<iostream>

class Base
{
	const int m_id;//private
public: 
	Base(int id=0):m_id(id){}
	int getId() const {
		return m_id;
	}	
};
class Derived: public Base{//when an object is created for the derived class ,it first looks whether it is been inherited if so 
//it first calls the base class constructor(goes to the most base)and then calls the derived class constructor.
	double m_cost;
public:
	Derived(int id=0,double cost=0.0):Base(id),//calling base constructor so that we can set the value of the m_id through base.. 
	m_cost(cost){}							   //class constructor
	// Derived(int id,double cost){			--Wecan set the value of m_id this way but when m_id is const we cant do this because 
	// 	m_id=id;m_cost=cost;				--when we create obj of derived class it first calls the base class constructor which 
	// }									--defines const variable
	double getCost()const {return m_cost;}
};
int main(int argc, char const *argv[])
{
	Derived der(2,5.4);
	std::cout<<"id:"<<der.getId()<<std::endl<<"cost:"<<der.getCost();
	return 0;
}