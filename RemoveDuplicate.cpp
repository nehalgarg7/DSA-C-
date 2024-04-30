#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vector <int> nums;
    //nums.push_back(4);
    vector<int> ans(4);
   // int n = nums.size(); //3
    //int rd = 0;
   // ans[0] = 4;
    cout << ans[2];
    return 0;
}

// class Solution
// {
// public:
//     vector<int> removeDuplicates(vector<int> &nums)
//     {
//         // Your code goes here
//         vector<int> ans;
//         int n = nums.size();
//         int rd = 0;
//         ans[rd] = nums[0];
//         for (int i = 1; i < n; i++) // n-1
//         {
//             if (nums[i] != ans[rd])
//             {
//                 rd++;
//                 ans[rd] = nums[i];
//             }
//         }
//         return ans;
//     }
// };