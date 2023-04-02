// find out the sum of digits using recursion.

#include <iostream>
using namespace std;

int Sum(int a)
{
    // base case
    if(a>=0 && a<=9)
    {
        return a;
    }
    // recursive case
    int result = (a % 10) + Sum(a / 10);
    return result;
}

int main()
{
    cout<<Sum(152);
    return 0;
}