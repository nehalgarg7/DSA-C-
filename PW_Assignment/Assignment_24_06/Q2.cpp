/***Q2.** Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
- Return k.

**Example :**
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_*,_*]

**Explanation:** Your function should return k = 2, with the first two elements of nums being 2. It does not matter what you leave beyond the returned k (hence they are underscores)[*/

#include <bits/stdc++.h>
using namespace std;

void removeElement(vector<int> &nums, int val)
{
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            i--;
            size--;
        }
    }
}

int main()
{
    int size, val;
    cout << "Enter the size of the array: \n";
    cin >> size;

    cout << "Enter the element of the array: \n";
    vector<int> nums;
    for(int i=0;i<size; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    
    cout << "Enter the value\n";
    cin >> val;

    removeElement(nums, val);

    cout << "Size of the array: " << nums.size() <<endl;

    cout << "Elements of the array: " ;
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}