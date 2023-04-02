#include <iostream>
using namespace std;

int fibonacci(int n)
{
    //base case
    // if(n==0)
    // {
    //     return 0;
    // }
    // else if(n==1)
    // {
    //     return 1;
    // }

    if(n==0 || n==1) 
    {
        return n;
    }

    //recursive case
    int result = fibonacci(n-1) + fibonacci(n-2);
    return result;
}

int main()
{
    cout<<fibonacci(3);
    return 0;
}