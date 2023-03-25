// Longest common prefix

// T.C = O(nlogn * m) + O(min(s[0].size,...s[s.[size-1].size()]{m is the general length of string}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//2nd approach
string LCP1(vector<string> &str)
{
    // keeping first string as const and comparing it with all other strings
    string s1=str[0];
    int ans_length=s1.size();

    for(int i=1; i< str.size(); i++)
    {
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]) // Finding the common prefix length
        {
            j++;
        }
        ans_length = min(ans_length,j); // updating length of ans string
    }

    return s1.substr(0,ans_length);
}


string LCP(vector<string> &str)
{
    // sorting the array of string.
    sort(str.begin(),str.end());

    string s1 = str[0], s2 = str[str.size()-1];

    string result="";

    for(int i=0;i<s2.size();i++)
    {
        if(s1[i]==s2[i])
        {
            result+=s1[i];
        }
        else
        {
            return result;
        }
    }
}


int main()
{
    int n;
    cout<<"Enter number of strings\n";
    cin>>n;

    vector <string> str(n);

    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }

    cout<< "Longest common prefix:" << LCP1(str)<<endl;
    return 0;
}