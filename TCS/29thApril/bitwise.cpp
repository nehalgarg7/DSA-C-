/**
 * Ques: Perform bitwise OR and return the number of distinct values. Bitwise Or will be performed on the subarray of an input array.
 *
 * Example: Input: [1,2,3], Output: 3
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    vector<int> nums;
    while (cin >> num)
    {
        nums.push_back(num);
    }
    
    set<int> s;

    for(int i=0; i<nums.size(); i++)
    {
        s.insert(nums[i]);
        int val = nums[i];
        cout << val;
        for(int j=i+1; j<nums.size(); j++)
        {
            val = val | nums[j];
            cout << val;
            s.insert(val);
        }

        cout << endl;
    }

    //cout << s.size();
    return 0;
}