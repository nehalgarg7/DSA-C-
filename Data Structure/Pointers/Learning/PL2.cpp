#include <iostream>
using namespace std;

void swap (int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y =  temp;
}

void swapbyreference (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    int *p1 = &x;
    int *p2 = &y;

    swap (p1,p2); // p1 and p2 are the pointer holding address. so to catch it we have to declare pointer parameter on the function.

    cout << x << y <<endl; 

    swapbyreference (x,y); // here we pass the variables itself but in the function we call it by reference. Referencing means giving the another name for the same variable. Syntax : (data_type &ref = variable);
    cout << x << y <<endl; 
    return 0;
}