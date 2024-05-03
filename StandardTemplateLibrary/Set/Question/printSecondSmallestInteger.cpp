/**
 * Given n integers (can be duplicates), print the second smallest integer.
 * if it does not exist, print -1.
 */

#include <bits/stdc++.h>
using namespace std;

int secondElement(vector<int> &v)
{
    set<int> s;
    for (auto val : v)
    {
        s.insert(val);
    }

    if(s.size() <2)
    {
        return -1;
    }
    else
    {
        auto itr = s.begin();
        itr++;

        return *itr;
    }
}

int main()
{
    vector<int> v{1, 2, 3, 1, 1};

    cout <<secondElement(v);
    return 0;
}