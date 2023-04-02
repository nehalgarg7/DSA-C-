// print the sum of first n natural number

#include <iostream>
using namespace std;


int Sum(int n)
{
    //base case
    if(n==1)
    {
        return 1;
    }

    //recursive case
    int result = n + Sum(n-1);
    return result;
}

int main()
{
    cout<< Sum(5);
    return 0;
}