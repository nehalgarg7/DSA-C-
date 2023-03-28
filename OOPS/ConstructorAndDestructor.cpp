#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    // Default Constructor when no agruments is passed.
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int x,int y) //Parameterised constructor (arguments are passed)
    {
        length = x;
        breadth = y;
    }

    Rectangle(Rectangle& r) // Copy constructor - initialise an obj by another existing object
    {
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle()
    {
        cout << "Destructor is called\n"; 
    }
};

int main()
{
    Rectangle r1;
    cout<<r1.length<<r1.breadth<<endl;

    Rectangle r2(4,5);
    cout<<r2.length<<r2.breadth<<endl;

    Rectangle r3 = r2; // r3(r2) {Both syntax are correct}
    cout<<r3.length<<r3.breadth<<endl;


    Rectangle * r4 = new Rectangle();
    cout << r4->length << r4->length <<endl;
    delete r4; // delete keyword is used when we create an object with new keyword. It calls the destructor function of the class.
    return 0;
} 