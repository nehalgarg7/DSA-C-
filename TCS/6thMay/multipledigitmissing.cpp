/**
 * 
 * Constraint : printing missing natural number with the range of [smallest number - highest number]
*/


#include <bits/stdc++.h>
using namespace std;

set<int> anotherApproach(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    set<int> s;

    for(int i=arr[0]; i<=arr[arr.size()-1]; i++)
    {
        s.insert(i);
    }

    for(int i= 0; i<arr[arr.size()-1]; i++)
    {
        s.erase(arr[i]);
    }

    return s;

    //T.C = O(n logn)
}

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

    cout << endl;
    cout << "Another Approach: " ;

    set<int> result = anotherApproach(arr);

    for(auto ele: result)
    {
        cout << ele << " ";
    }
    return 0;
}