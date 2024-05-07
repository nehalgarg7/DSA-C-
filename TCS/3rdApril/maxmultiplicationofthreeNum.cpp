#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int pos1 = arr [n-1];
    int pos2 = arr [n-2];
    int pos3 = arr [n-3];

    int neg1 = arr[0];
    int neg2 = arr[1];

    int ans = max(neg1*neg2*pos3, pos1*pos2*pos3);
    cout << ans;
    return 0;
}