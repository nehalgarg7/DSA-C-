#include <iostream>
using namespace std;

class A{
    int x = 1 ;
    public: 
    A(int y)
    {
        x = y;
    }

    friend void print(A &obj); // just have to provide the definition of function with friend keyword
};

void print(A &obj)
{
    cout << obj.x <<endl;
}

int main()
{
    A obj(5);
    //cout << obj.x <<endl;

    print(obj);
    return 0;
}