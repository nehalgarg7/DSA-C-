/**
 * 1. Map is a STL Container which stores key-value pairs.
 * 2. The elements are stored in ascending (by default) or descending order.
 * 3. Maps cannot have duplicate keys.
 * 4. Maps are implemented through BST.
 * 5. Updation of value corresponding to its key is allowed.
 * 
 * 
 * Member Functions:
 * 1. Erase:
 * 
 * m.erase(iterator)
 * m.erase(key)
 * m.erase(start_itr, end_itr)
 * 
 * 2. swap() -> If two maps M1 and M2 have same datatype {Key & Value both} then we can swap the both maps.
 * 
 * M1.swap(M2); swap(M1,M2);
 * 
 * 3. clear() -> m.clear() {delete all the elements from the map}
 * 4. empty() -> m.empty() {return if empty or not}
 * 5. size() -> m.size() {return size of map}
 * 6. max_size()
 * 7. find() -> m.find(key) {returns itr to element if present, else it returns map.end() itr}.
 * 8. count() -> m.count(key) {return the number of count.} Always return 0 or 1.
 * 
 * 9. upper_bound() -> returns an itr to next greater element.
 * 10. lower_bound() -> returns an itr to element itself if present else itr to next greater element.
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