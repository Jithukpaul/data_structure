#include<iostream>
#include<memory>
using namespace std;
class A
{
public:
    void dis(){
        cout<<"this is the function of A..\n";
    }
};
int main(){
    cout<<"auto ptr------------------";
    auto_ptr<A> p1(new A);//p1 is an auto ptr of type A
    p1->dis();          //calling the display function
    cout<<p1.get()<<endl;//memory address
    auto_ptr<A> p2(p1);
    p2->dis();
    cout<<"p1:"<<p1.get();cout<<endl;//will be 0
    cout<<"p2:"<<p2.get();cout<<endl;
    cout<<"unique_ptr---------------";
    unique_ptr<A> p3 (new A);
    p3 -> dis();  
    cout << p3.get() << endl;  // returns the memory address of p3
    unique_ptr<A> p4 = move(p3);// transfers ownership to p4
    p4 -> dis();
    cout << p3.get() << endl;
    cout << p4.get() << endl;
    unique_ptr<A> p5 = move (p4);// transfers ownership to p5
    p5->dis();
    cout << p3.get() << endl;
    cout << p4.get() << endl;
    cout << p5.get() << endl;
    cout<<"shared_ptr------------";
    shared_ptr<A> p6 (new A);
    cout << p6.get() << endl;
    p6->dis();
    shared_ptr<A> p7 (p6);
    p7->dis();
    cout << p6.get() << endl;
    cout << p7.get() << endl; 
    // Returns the number of shared_ptr objects
    //referring to the same managed object.
    cout << p6.use_count() << endl; // Returns the number of shared_ptr
    cout << p7.use_count() << endl; 
    // Relinquishes ownership of p6 on the object and pointer becomes NULL
    p6.reset();
    cout << p6.get() << endl;
    cout << p7.use_count() << endl;
    cout << p7.get() << endl;
    return 0;
}
