#include <iostream>
using namespace std;

class Parent // Here public, private and protected are access modifiers.
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

// // Here public, private and protected are inheritance modes.
class Child1 : public Parent
{
    // x will remain public
    // y will remain protected
    // z will not be accessible
};

class Child2 : private Parent
{
    // x will remain private
    // y will remain private
    // z will not be accessible
};

class Child3 : protected Parent
{
    // x will remain protected
    // y will remain protected
    // z will not be accessible
};

int main()
{
    Parent p;
    p.x; // Accesible here.

    // p.y,p.z; ...Not accesible here.
    return 0;
}