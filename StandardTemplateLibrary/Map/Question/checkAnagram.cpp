#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> charFreq1, charFreq2;


    for(int i=0; i<s1.length(); i++)
    {
        charFreq1[s1[i]]++;
    }

    for(int i=0; i<s2.length(); i++)
    {
        charFreq2[s2[i]]++;
    }

    // cout << charFreq2['a'] << endl;


    for(auto ele: charFreq1)
    {
        if(charFreq2.count(ele.first) != 0 && charFreq2[ele.first] == ele.second)
        {

        }
        else
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}