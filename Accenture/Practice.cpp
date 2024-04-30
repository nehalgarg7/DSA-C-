#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcDOGabc", temp = "";

    vector<string> result;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (temp.size() > 0 && temp[0] >= 'A' && temp[0] <= 'Z')
            {
                result.push_back(temp);
                temp = "";
            }

            temp = temp + s[i];
        }
        else
        {
            if (temp.size() > 0 && temp[0] >= 'a' && temp[0] <= 'z')
            {
                result.push_back(temp);
                temp = "";
            }

            temp = temp + s[i];
        }
    }

    if(temp.size() > 0)
    {
        result.push_back(temp);
    }

    for(int i=0; i<result.size() ;i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}