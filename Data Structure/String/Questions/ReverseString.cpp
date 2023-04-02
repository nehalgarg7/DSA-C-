#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class stringCreation
{
public:
    string s;
    stringCreation(string s1)
    {
        s = s1;
    }
    void temp()
    {
        reverse(s.begin(), s.end());
    }
};

int main()
{
    stringCreation obj("0123");
    obj.temp();
    int temp = stoi(obj.s);
    cout << obj.s;
    cout << temp;

    return 0;
}