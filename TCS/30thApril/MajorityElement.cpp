#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map <int, int> eleCount;

    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;

        eleCount[val]++;
    }

    for(auto e: eleCount)
    {
        if(e.second >= n/2)
        {
            cout << e.first << " ";
        }
    }
    return 0;
}