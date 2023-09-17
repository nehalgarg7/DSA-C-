/***Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][
*/

#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &nums, int target, vector<int>& result)
{
  for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int sum = nums.at(i) + nums.at(j);
            if (sum == target)
            {
                result.push_back(i);
                result.push_back(j);
                return ;
            }
        }
    }
}

int main()
{
    int size, target;
    cout << "Enter the size of the array: \n";
    cin >> size;

    cout << "Enter the element of the array: \n";
    vector<int> nums , result;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    cout << "Enter the target\n";
    cin >> target;

    twoSum(nums, target, result);

    cout << "Result: ";
    for(int i=0; i<result.size() ; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}