#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "aabb", s2 = "xxyc";

    unordered_map <char, char> encode;

    for(int i=0; i<s1.size(); i++)
    {
        encode [s1[i]] = s2[i];

        if(encode.count(s1[i]) > 0 && encode[s1[i]] == s2[i])
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