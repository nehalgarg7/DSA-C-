// Isomorphic

// TC : O(n) {Length of string} && SC: 0(26) {Constant}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isIsomorphic(string s1, string s2)
{
    if(s1.size()!=s2.size())
    {
        return false;
    }
    else
    {
        vector<int> freq1(26,-1),freq2(26,-1);

        for(int i=0;i<s1.size();i++)
        {
            if(freq1[int(s1[i])-int('a')]==freq2[int(s2[i])-int('a')])
            {
                freq1[int(s1[i])-int('a')]=i;
                freq2[int(s2[i])-int('a')]=i;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1,s2))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}