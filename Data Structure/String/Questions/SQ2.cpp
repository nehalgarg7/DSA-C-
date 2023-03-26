// Anagram {rearranging letter of word}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string countsort(string str)
{
    vector<int> freq(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        freq[(int(str[i])) - int('a')]++;
    }

    int j=0;
    for (int i = 0; i < 26; i++)
    {
        while (freq.at(i) != 0)
        {
            str[j++]= char(i + int('a'));
            freq.at(i)--;
        }
    }

    return str;
}


int main()
{
    string s1 = "Nehal", s2 = "eNahl";
    if(countsort(s1)==countsort(s2))
    {
        cout << "true";
    }
    else
    {
        cout <<"false";
    }
    return 0;
}