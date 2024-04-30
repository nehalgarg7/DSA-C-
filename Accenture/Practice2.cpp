#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "saveChangesInTheEditor";

    vector <string> result;

    string temp = "";

    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            temp += toupper(s[i]);
        }
        else
        {
            if(temp.size()>0)
            {
                result.push_back(temp);
                temp = "";
            }
            temp += tolower(s[i]);
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