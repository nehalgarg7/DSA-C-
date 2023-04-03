/*
Given a number n. Print if it is an armstrong or not.

An armstrong number is a number if the sum of every digit in that number raised to the power of total digits in that number is equal to the number.

Ex:
Input: 153
Output: Yes
Explaination: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153, hence 153 is a armstrong number.
*/

#include <bits/stdc++.h>
using namespace std;

int armstrong(int num, int d)
{
    // base case
    if (num >= 1 && num <= 9)
    {
        return num;
    }
    int result = pow(num % 10, d) + armstrong(num / 10, d);
    return result;
}

int main()
{
    int num;
    cin >> num;

    int digits = 0;
    int n = num;
    while (n > 0)
    {
        n = n / 10;
        digits++;
    }
    //cout << digits;
    int result = armstrong(num, digits);
    if (result == num)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}
