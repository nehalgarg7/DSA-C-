#include <iostream>
using namespace std;

class A
{
public:
    virtual void print()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "Class B\n";
    }
};

int main()
{
    A *a;
    B b;

    a = &b; //
    a->print();
    //a.print();
    //b.print();
    return 0;
}