// Remove all the occurrence of 'a' from string s = "abcax".

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeChar(string s, int index, char var)
{
    // base case
    if (index == s.size())
    {
        string temp = "";
        return temp;
    }

    string result = "";
    if (s[index] != var)
    {
        result += s[index];
        result += removeChar(s, index + 1, var);
    }
    else
    {
        result += removeChar(s, index + 1, var);
    }
    return result;
}

int main()
{
    string s = "abcax";
    cout << removeChar(s, 0, 'a');
    cout << s;
    return 0;
}