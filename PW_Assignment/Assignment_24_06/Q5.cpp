/***Q5.** You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

**Example 1:**
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

**Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
*/
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    while (i < (m + n) && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            nums1.insert(nums1.begin() + i, nums2[j]);
            nums1.pop_back();
            i++;
            j++;
        }
    }
    int k = 0;
    while (j < n)
    {
        nums1.insert(nums1.begin() + ((m + n) - (n - j)), nums2[j]);
        nums1.pop_back();
        i++;
        j++;
    }
}

int main()
{
    int m, n;
    cout << "Enter the size of 1st and 2nd array respectively: \n";
    cin >> m >> n;

    vector<int> nums1, nums2;
    cout << "Enter the element of the 1st array: \n";
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        nums1.push_back(temp);
    }

    cout << "Enter the element of the 2nd array: \n";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums2.push_back(temp);
        nums1.push_back(0);
    }

    merge(nums1, m, nums2, n);

    cout << "Result: ";
    for(int i=0; i<(m+n); i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}