#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words;
    words.push_back("wall");
    words.push_back("ah");
    words.push_back("wallahah");


    unordered_map<char, int> charCount;

    for(int i=0; i<words.size(); i++)
    {
        for(int j=0; j<words[i].size(); j++)
        {
            charCount[words[i][j]]++;
        }
    }

    for(auto ele: charCount)
    {
        if(ele.second % 3 != 0)
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}