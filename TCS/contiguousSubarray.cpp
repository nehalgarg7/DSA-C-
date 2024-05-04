/***
 * Ques: Given an array and a integer k. We need to find the maximum element in each of the contiguous subarrays.
 *
 * Input: 2 4 7 1 6 3
 * K = 3
 * Output: 7 7 7 6
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v {2,4,7,1,6,3}, result;

    int k = 3;

    //sliding window problem

    for(int i=0; i<v.size()-k+1; i++)
    {
        auto itr1 = v.begin();
        auto itr2 = v.begin();

        advance(itr1, i);
        advance(itr2, i+k);

        int a = *max(itr1, itr2);
        
        cout << a << endl;

        vector<int>:: iterator it;

        for(it= itr1 ; it != itr2; it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    for(auto val:result)
    {
       // cout << val << " ";
    }
    return 0;
}