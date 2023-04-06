
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    map<int, string> m; //ordered map in based on BST. T.C.= O(log n)

    // Insertion first way
    m[1] = "Nehal";
    m[13] = "";
    m[2] = "love";

    // Insertion second way
    m.insert({4, "Shree"});
    cout << "Before erase:" << endl;
    for (auto it : m)
    {
        cout << it.second;
    }

    cout << "Count:" << m.count(13) << endl;
    cout << "Before erase:" << endl;
    m.erase(13); // In the case of MAP, we just have to give key to delete an tuple. T.C = O(log n)
    for (auto it : m)
    {
        cout << it.second;
    }
    cout << "Count:" << m.count(13) << endl;

    auto it = m.find(2);
    for(auto i=it;i!=m.end();i++)
    {
        cout << (*i).second <<endl;
    }
    return 0;
}