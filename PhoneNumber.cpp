#include <bits/stdc++.h>
using namespace std;

string appending(string &ans, string &word)
{
    if (word == "zero")
    {
        ans += "0";
    }
    else if (word == "one")
    {
        ans += "1";
    }
    else if (word == "two")
    {
        ans += "2";
    }
    else if (word == "three")
    {
        ans += "3";
    }
    else if (word == "four")
    {
        ans += "4";
    }
    else if (word == "five")
    {
        ans += "5";
    }
    else if (word == "six")
    {
        ans += "6";
    }
    else if (word == "seven")
    {
        ans += "7";
    }
    else if (word == "eight")
    {
        ans += "8";
    }
    else if (word == "nine")
    {
        ans += "9";
    }
}

int main()
{
    string s, word = "", ans = "";
    cout << "Enter the string:" << endl;
    getline(cin, s);

    vector<string> words;

    // created separated words.
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            words.push_back(word);
            word = "";
        }
    }

    if (word.size() > 0)
    {
        words.push_back(word);
        word = "";
    }

    // iterate each word to find the number.

    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == "double")
        {
            appending(ans, words[i+1]);
        }
        else if (words[i] == "triple")
        {
            appending(ans, words[i+1]);
            appending(ans, words[i+1]);
        }
        else
        {
            appending(ans, words[i]);
        }
    }

    cout << ans;
    return 0;
}