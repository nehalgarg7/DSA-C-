#include <iostream>
using namespace std;

int fibrecursion(int n)
{
    if( n == 0 || n == 1)
    {
        //cout << n << " ";
        return n;
    }

    int thisTerm = fibrecursion (n - 1) + fibrecursion (n - 2);
    //cout << thisTerm << " ";
    return thisTerm;
}

int main()
{
    int n;
    cin >> n;

    // int totalSum = 0;

    // int firstTerm = 0, secondTerm = 1;
    // totalSum = totalSum + firstTerm + secondTerm;

    // for(int i=3; i<=n; i++)
    // {
    //     int thisTerm = firstTerm + secondTerm;
    //     firstTerm  = secondTerm;
    //     secondTerm = thisTerm;

    //     totalSum += thisTerm;
    // }

    // cout << totalSum;

    int sum  = 0;
    cout << fibrecursion(n);

    return 0;
}