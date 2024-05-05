#include <bits/stdc++.h>
using namespace std;

void firstInput(vector<int> &nums, int &target)
{
    string str;
    getline(cin, str);

    cin >> target;

    stringstream ss(str);

    string token;
    char delimiter = ' ';

    while (getline(ss, token, delimiter))
    {
        nums.push_back(stoi(token));
    }

    // for(auto ele: nums)
    // {
    //     cout << ele << " ";
    // }

    // cout << target << endl;
}

void updateSubArray(vector<vector<int>> &subArray, int target)
{
    for (int i = 0; i < subArray.size(); i++)
    {
        int sum1 = 0;
        for (int j = 0; j < subArray[i].size(); j++)
        {
            sum1 = sum1 + subArray[i][j];
        }

        if (target == sum1)
        {
            for(int k=0; k<subArray[i].size(); k++)
            {
                cout << subArray[i][k] << " ";
            }
        }
    }
}

void subArray1(vector<int> &nums, vector<vector<int>> &subArray, int target)
{
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        vector<int> temp;

        temp.push_back(nums[i]);
        subArray.push_back(temp);
        for (int j = i + 1; j < size; j++)
        {
            temp.push_back(nums[j]);

            subArray.push_back(temp);
        }

        temp.erase(temp.begin(), temp.end());
    }

    updateSubArray(subArray, target);
}

int countSubArray(vector<int> &nums, int target)
{
    // bruteforce
    int n = nums.size();

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int currentSum = nums[i];

        if (currentSum == target)
        {
            count++;
        }

        for (int j = i + 1; j < n; j++)
        {
            currentSum += nums[j];

            if (currentSum == target)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    // Write C++ code here

    // Input Ways
    vector<int> nums;
    vector<vector<int>> subArray;
    int target;
    firstInput(nums, target);

    // Logic Code
    //cout << countSubArray(nums, target);

    subArray1(nums, subArray, target);

    // for(int i=0 ; i<subArray.size(); i++)
    // {
    //     for(int j=0; j<subArray[i].size(); j++)
    //     {
    //         cout << subArray[i][j] << " ";
    //     }

    //     cout << endl;
    // }
    return 0;
}