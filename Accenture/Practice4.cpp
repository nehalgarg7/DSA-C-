#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, result="";
    cout << "Enter String:" <<endl;
    cin >> s;


    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] != s[i+1])
        {
            result += s[i];
        }
    }

    result += s[s.size()-1];


    int ans = 0,ones =0, zeros=0;

    for(int i=0; i<result.size(); i++)
    {
        if(result[i] == '0')
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }

    

    if(zeros>=ones)
    {
        ans = zeros - 1;
    }
    else
    {
        ans = zeros;
    }

    cout << ans;
    return 0;
}