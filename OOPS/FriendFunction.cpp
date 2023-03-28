#include <iostream>
using namespace std;

class A{
    int x = 1 ;

    friend void print(A &obj);
};

void print(A &obj)
{
    cout << obj.x <<endl;
}

int main()
{
    A obj;
    //cout << obj.x <<endl;

    print(obj);
    return 0;
}