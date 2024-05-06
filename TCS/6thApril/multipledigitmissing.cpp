/**
 * 
 * Constraint : printing missing natural number with the range of [smallest number - highest number]
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    vector<int> arr;

    while (cin >> num)
    {
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    int count = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (count == arr[i])
        {
            count++;
        }
        else
        {
            while (count != arr[i])
            {
                cout << count << " ";
                count++;
            }
            count++;
        }
    }

    // T.C = O(n^2)

    return 0;
}