/**
 * Check if string has all english alphabets
 * Given a string. You have to check if it has all english alphabets from a-z.
 *
 * Input1: abcdEfGHIJKLmnopqrstuvWXYZ
 * Output1 : Yes
 *
 * Input2: NehalGarg
 * Output2: No
 */

#include <bits/stdc++.h>
using namespace std;

string check (string & a)
{
    set <char> s;

    for(auto value: a)
    {
        s.insert(value);
    }

    if(s.size() == 26)
    {
        return "true";
    }

    return "false";
}

int main()
{
    string a = "aAbcdEfGHIJKLmnopqrstuvWXYZ";

    // for(int i=0; i<a.length(); i++)
    // {
    //    a[i] =  toupper(a[i]);
    // }

    // Another Approach

    transform(a.begin(),a.end(),a.begin(),::tolower);
    cout << check(a);
    return 0;
}