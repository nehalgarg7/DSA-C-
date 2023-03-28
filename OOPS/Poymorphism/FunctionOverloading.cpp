// Compile-Time Polymorphism

#include <iostream>
using namespace std;

class Sum{

    public:
    void sum(int x, int y)
    {
        cout<<x+y<<endl;
    }

    void sum(int x,int y,int z)
    {
        cout<<x+y+z<<endl;
    }

    void sum(float a, float b)
    {
        float sum1 = a+b;
        cout<<sum1<<endl;
    }
};

int main()
{
    Sum a;
    a.sum(2,3);
    a.sum(4,5,6);
   // a.sum(1.2, 5.4); check here. Solution see below...have to specify.
    a.sum((float)1.2,(float) 5.4);
    return 0;
}