/**
 * 1. Allows duplicate values.
 * 2. values are not ordered.
 * 3. values will be identified by itself.
 * 4. values cannot be modified.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_multiset <int> ms;

    ms.insert(4);
    ms.insert(5);
    ms.insert(7);
    ms.insert(3);
    ms.insert(4);

    for(auto val: ms)
    {
        cout << val << " ";
    }

    cout <<endl;

    return 0;
}