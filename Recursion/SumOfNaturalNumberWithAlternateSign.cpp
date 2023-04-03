// Given a number n. Find the sum of natural numbers till n but with alternate signs.


/*
1 -2 +3 -4 +5 -6 +7 -8 .... so on

1. All the even numbers gets a negative sign.
2. All the odd numbers gets a positive sign.
*/
#include <iostream>
using namespace std;

int Sum(int n)
{
    //base case
    if(n==0)
    {
        return 0;
    }

    return Sum(n-1) + ((n %2 == 0) ? (-n) : (n));
}

int main()
{
    cout << Sum(12);
    return 0;
}