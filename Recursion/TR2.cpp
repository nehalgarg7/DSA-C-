// Print sum of first n natural numbers and fac of n

#include <iostream>
using namespace std;

void printsum(int i, int n, int sum)
{
    if (i == n)
    {
        sum += i;
        cout << sum;
        return;
    }

    sum += i;
    printsum(i + 1, n, sum);
}

void printfac(int i, int n, int fac)
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

void printfib(int f, int l, int n)
{
    if(n==0)
    {
        return;
    }
    int c = f + l ;
    cout << c;
    printfib(l,c,n-1);
}

int total = 1;

void printxpn(int x, int n)
{
    if (n==0)
    {
        cout<< total;
        return;
    }
    total = total * x;
    printxpn(x,n-1);
}

int main()
{
    // printsum(1, 5, 0);
    // printfac(1, 5, 1);
    // printfib(0, 1, 5);
    printxpn(5,3);
    return 0;
}