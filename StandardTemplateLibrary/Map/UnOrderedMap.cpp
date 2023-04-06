// Unordered Map Discussion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // creation
    unordered_map<string, int> m; //    T.C. = O(1).

    // insertion
    // 1
    pair<string, int> p = make_pair("Nehal", 1);
    m.insert(p);

    // 2
    pair<string, int> p2("Love", 2);
    m.insert(p2);

    //3
    m["Ownself"] = 3;
    m["Ownself"] = 4;//update the value for the key:meera (value) 3->4;


    //search
    cout<<m["Ownself"] <<endl;
    cout << m.at("Nehal") <<endl;

    // cout << m.at("unknownKey") << endl; // will throw an error.
    // cout<< m["unkownKey"] <<endl; // will create an entry by value '0'.

    cout<<m.size(); // return the size of the map.

    //to check presence
    cout<<m.count("Nehal") <<endl; //in the case of absent -> 0 & present ->1

    //erase.
    m.erase("Ownself");
    cout<<m.size()<<endl;

    //traverse
    for(auto it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    unordered_map<string,int> :: iterator it = m.begin();

    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}