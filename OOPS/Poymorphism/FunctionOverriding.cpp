// Run-Time Polymorphism

/*
A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

1.Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
2.They are mainly used to achieve Runtime polymorphism
3.Functions are declared with a virtual keyword in base class.
4.The resolving of function call is done at runtime.


Rules for Virtual Functions-->

1.Virtual functions cannot be static.
2.A virtual function can be a friend function of another class.
3.Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
4.The prototype of virtual functions should be the same in the base as well as derived class.
5.They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
6.A class may have virtual destructor but it cannot have a virtual constructor.
*/

#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print() // using virtual keyword we do run time polymorphism. // Here child class overrides the parent class.
    {
        cout << "This is the parent class print\n";
    }
    void show()
    {
        cout << "This is the parent class show\n";
    }
};

class child : public Parent
{
public:
    void print()
    {
        cout << "This is the child class print\n";
    }
    void show()
    {
        cout << "This is the child class show\n";
    }
};

int main()
{
    Parent *p, q , *r = new Parent();
    child c, *d = new child();

    // passing address of object c (child class) to parent class object pointer.
    p = &c; // means run time pe override kr diya object variable ko.

    q.print();
    q.show();

    cout << endl;

    p->print(); //function overiding using virtual keyword is done.. since we refering to the base class object using parent class pointer.
    p->show(); // here function overridding is not done. since we not use virtual keyword.

    cout << endl;

    c.print(); // function overridding done. we don't need virtual function since we are pointer to child class object using parent class pointer.
    c.show(); // function overridding done. we don't need virtual function since we are pointer to child class object using parent class pointer.

    cout << endl;

    d->print(); // function overridding done. we don't need virtual function since we are pointer to child class object using parent class pointer.
    d->show(); // function overridding done. we don't need virtual function since we are pointer to child class object using parent class pointer.

    cout << endl;
    r->print();
    r->show();

    r=&c; // passing address of object c (child class) to parent class object pointer.
    cout << endl;
    r->print(); //function overiding using virtual keyword is done.. since we refering to the base class object using parent class pointer.
    r->show();  // here function overridding is not done. since we not use virtual keyword.
    return 0;
}