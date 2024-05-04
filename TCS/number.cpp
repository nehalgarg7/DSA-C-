#include <bits/stdc++.h>
using namespace std;

void firstInput(vector<int> &nums, int &target)
{
    string str;
    getline(cin, str);

    cin >> target;

    stringstream ss(str);

    string token;
    char delimiter = ',';

    while (getline(ss, token, delimiter))
    {
        nums.push_back(stoi(token));
    }

    // for(auto ele: nums)
    // {
    //     cout << ele << " ";
    // }

    cout << target << endl;
}

int countSubArray(vector<int> &nums, int target)
{
    // bruteforce

    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int subArraySum = nums[i];

        if (subArraySum == target)
        {
            count++;
        }

        for (int j = i + 1; j < nums.size(); j++)
        {
            subArraySum += nums[j];
            if (subArraySum == target)
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
    int target;
    firstInput(nums, target);

    // Logic Code
    cout << countSubArray(nums, target);
    return 0;
}