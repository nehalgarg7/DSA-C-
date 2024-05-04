/**
 * Given an array of length n and a target, return a pair whose sum is equal to target. If there are no pair presnet, return -1.
 *
 * Input: n=7, elements = [1,4,5,11,13,10,2], Target = 13
 * Output: [13, 6]
 */

#include <bits./stdc++.h>
using namespace std;
int main()
{
    int n = 7,index =0, target = 13;
    vector<int> nums {1,1,4,5,11,13,10,2,3};

    map <int, int> num;

    for(int i=0; i<nums.size(); i++)
    {
        if(num.count(nums[i]) == 0 && num.count(target-nums[i]) == 0)
        {
            num[nums[i]] = index;
            index++;
        }
        else
        {
            cout << nums[i] << " , " << target-nums[i] << endl;
        }
        
    }
    return 0;
}