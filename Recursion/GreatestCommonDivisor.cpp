// Given two numbers x and y. Find the greatest common divisor of x and y using recursion.

/*
Constraints : 0 <= x, y<= 1e6
Input1: x=4 , y=9
Output: 1

Input2: x=12, y=20
Output: 4
*/

int gcd(int x, int y)
{
    if (y > x)
        return gcd(y, x); // swap
    // base case
    if (y == 0)
        return x;

    // recursive case
    return gcd(y, x % y);
}

#include <iostream>
using namespace std;
int main()
{
    cout << gcd(40, 80);
    return 0;
}