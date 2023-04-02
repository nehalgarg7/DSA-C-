// reverse a number using number.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string s = " ";

void reverse(int a) // T.C = O(digit)
{
    // base case
    if (a >= 0 && a <= 9)
    {
        s += to_string(a);
        return;
    }
    // recursive case
    s += to_string(a % 10);
    reverse(a / 10);
}

int main()
{
    //reverse(12);
    //cout << s;

    int num=0123, result=0; //check notes.(octal,decimal concept)
    //cin>>num;
    
    while(num>0)
    {
        int rem = num % 10;
        result = result *10 + rem;
        num = num/10;
    }

    cout << result;
    return 0;
}