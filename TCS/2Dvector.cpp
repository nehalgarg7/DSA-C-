#include <bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
        // sort the array on increasing order of freq.
        sort(nums.begin(), nums.end());
        vector<vector<int>> freqCount;
        vector<int> result;

        int count = 1;
        nums[nums.size()] = INT_MAX;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == nums[i+1])
            {
                count++;
            }
            else
            {
                freqCount.push_back({nums[i], count});
                count = 1;
            }
        }

        sort(freqCount.begin(), freqCount.end(), [&](vector<int> &a, vector<int> &b){
            return a[1] < b[1];
        });

        sort(freqCount.begin(), freqCount.end(), [&](vector<int> &a, vector<int> &b){
            if(a[1] == b[1])
            {
                return a[0] > b[0];
            } else {
        // Provide a default return value when a[1] != b[1]
            return a[0] < b[0];
    }
        });

        for(int i=0; i<freqCount.size(); i++)
        {
            int val = freqCount[i][1];
            for(int j=0; j<val; j++)
            {
                result.push_back(freqCount[i][0]);
            }
        }

        return result;
    }
int main()
{
    vector<int> nums{};

    frequencySort(nums);
    return 0;
}