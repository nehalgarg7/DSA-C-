/**
 * Ques: Given an array arr[] of length N, find the length of the longest subarray with a sum equal to 0.
 *
 * Input 1: n = 8
 *          arr[] = [15,-2,2,-8,1,7,10,23]
 *
 * Output 1: 5
 *
 * Input 2: n = 3
 *          arr[] = {1,2,3}
 *
 * Output 2: 0
 */

#include <bits/stdc++.h>
using namespace std;

int maxLengthZeroSumSubarray(vector<int> &v)
{
    unordered_map<int,int> m; // prefix sum -> index
    int prefixsum = 0;
    int index =0;
    int maxlen = INT_MIN;

    for(int i=0;i<v.size();i++)
    {
        prefixsum += v[i];
        if(prefixsum == 0)
        {
            maxlen++;
        }

        if(m.find(prefixsum) != m.end())
        {
            maxlen = max(maxlen, i - m[prefixsum]);
        }
        else
        {
            m[prefixsum] = i;
        }
    }

    return maxlen;
}

int main()
{
    vector <int> v {15,-2, 2, -8, 1 , 7, 10, 23};

    cout << maxLengthZeroSumSubarray(v);
    return 0;
}