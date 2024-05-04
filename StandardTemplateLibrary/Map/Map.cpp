/**
 * 1. Map is a STL Container which stores key-value pairs.
 * 2. The elements are stored in ascending (by default) or descending order.
 * 3. Maps cannot have duplicate keys.
 * 4. Maps are implemented through BST.
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Declaration
    /*
    map < Key_dataType , Value_dataType > map_Name;
    map < Key_dataType , Value_dataType , greater <Key_dataType> > map_Name;
    */

    map<int, string> directory = {{1, "Abhishek"}, {2, "Bamboo"}, {3, "Cat"}};

    map<int, string> m;

    // Insertion first way
    m[1] = "Nehal";
    m[13] = "";
    m[2] = "love";

    // Insertion second way
    m.insert({4, "Shree"});

    cout << "Before erase:" << endl;
    for (auto ele : m)
    {
        cout << ele.second;
    }

    cout << "Count:" << m.count(13) << endl;

    cout << "Before erase:" << endl;
    m.erase(13); // In the case of MAP, we just have to give key to delete an tuple. T.C = O(log n)
    for (auto ele : m)
    {
        cout << ele.second;
    }
    cout << "Count:" << m.count(13) << endl;

    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).second << endl;
    }
    return 0;
}