// Compile-Time Polymorphism
// add to complex number using operator overloading

#include <iostream>
using namespace std;

class Complex{
    public:

    int real;
    int img;

    Complex(int x,int y)
    {
        real = x;
        img = y;
    }


    //Function Return type...operator joh bhi overload krna h
    Complex operator+ (Complex &c2){ //Operator Overloading
    /*
    we pass complex argument. // Complex operator+ {here Complex is a return type}
    */
     
     Complex ans(0,0);
     ans.real = real + c2.real;
     ans.img = img + c2.img;
     return ans;
    }
};


int main()
{
    Complex c1(1,2);
    Complex c2(1,3);

    Complex c3 = c1+c2; //c2 is passed as an agrument to c1.
    cout << c3.real << "+ i" <<c3.img <<endl;
    return 0;
}