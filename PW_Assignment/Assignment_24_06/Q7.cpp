/***Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: \n";
    cin >> size;

    int arr[size];
    cout << "Enter the array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    

    for(int i=0;i<size;i++)
    {
        for(int j=0; j<size-i-1;j++)
        {
            if(arr[j]==0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout << arr[i];
    }
    return 0;
}