#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int num;

    multiset<int> ms;
    vector<int> a;

    while (cin >> num)
    {
        a.push_back(num);
        ms.insert(num);
    }

    int n = a.size();

    cout << ms.count(2);
    return 0;
}