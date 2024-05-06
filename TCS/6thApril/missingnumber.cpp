#include <bits/stdc++.h>
using namespace std;

// int singledigitmissing(vector<int> &arr)
// {
//     1 2 3 5 = 11

//         // 2 3 5 7  (natural number)

//         // [lowest number, highest number]

//         actual n = current n + 1 = 4 + 1 = 5 sum = n(n + 1) / 2 = 1
// }

int main()
{
    int num;

    vector<int> arr;

    while (cin >> num)
    {
        arr.push_back(num);
    }

    // sort(arr.begin(),arr.end());

    // int lowestNumber = arr[0];
    // int highestNumber = arr[arr.size()-1];

    // single digit missing

    // singledigitmissing(arr);

    // int checkNum = arr[0]; //smallestNumber;

    // [2  5 7 8];

    /**
     * smallest number = arr[0];
     * largest number = arr[n-1];
     *
     * int count = arr[0];
     *
     * loop iteration start;
     *
     * i = 0 ;
     *
     * if count == arr[i];
     *   -- count++;
     * else
     *   --
     *     // nums[1] = 5 , count = 3
     *          while(count != arr[i])
     *          cout << count;
     *          count++;
     */
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
        }
    }

    return 0;
}