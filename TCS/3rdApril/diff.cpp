/**
 * Ques: We are given list of numbers we need to return maximum difference between smallest and largest number.
 *
 * Note: Smallest number should be before largest number:
 *
 * Example: Input: n = 7
 *          arr = {-3, -5, 1, 6, -7, 8, 11}
 *          Output: 18
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> nums;

    for(int i=0; i<n; i++)
    {
        int val;
        cin >> val;
        nums.push_back(val);
    }

    int largestNumber = INT_MIN;

    int diff = INT_MIN;

    for(int i=n-1; i>=0; i--)
    {
        largestNumber  = max(largestNumber, nums[i]);
        diff = max(diff, largestNumber - nums[i]);
    }

    cout << diff << endl;
    return 0;
}