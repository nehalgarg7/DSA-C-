#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent class" << endl;
    }
};

class Uncle // Multiple Inheritance
{
public:
    Uncle()
    {
        cout << "Uncle class" << endl;
    } 
};

class Relation: public Parent, public Uncle{ // Multiple Inheritance
    public:
    Relation()
    {
        cout << "Relation Class" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child class" << endl;
    }
};

class AnotherChild : public Parent // Hierachical Inheritance
{
public:
    AnotherChild()
    {
        cout << "AnotherChild class" << endl;
    }
};

class GrandChild : public Child // Multi-level Inheritance
{
public:
    GrandChild()
    {
        cout << "GrandChild class" << endl;
    }
};

int main()
{
    // Single level Inheritance
    Child obj;

    cout << endl;
    // Multi level Inheritance
    GrandChild obj1;

    cout << endl;
    // Multiple Inheritance
    Relation obj2;

    // Hierachical Inheritance

    // Hybrid Inheritance
    return 0;
}