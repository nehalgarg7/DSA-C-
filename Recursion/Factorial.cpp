// Return the factorial of a number.

#include <iostream>
using namespace std;

int fac(int n) // T.C,S.C=O(n)
{
    // base case
    if(n==1)
    {
        return 1;
    }
    //recursive case
    int result = n * fac(n-1);
    return result;
}

void printfac(int i, int n, int fac) //2nd approach
{
    if (i == n)
    {
        fac = fac * i;
        cout << fac;
        return;
    }

    fac = fac * i;
    printfac(i + 1, n, fac);
}

int main()
{
    cout << fac(5)<<endl;
    printfac(1,5,1); //2nd approach
    return 0;
}