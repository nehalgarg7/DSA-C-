/**Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true
*/

#include <bits/stdc++.h>
using namespace std;

bool distinctNumber(int *arr, int size)
{
    sort(arr, arr+size);
    for(int i=0; i<size; i++)
    {
        if(arr[i]==arr[i+1])
        {
            return true;
        }
    }
    return false;
}

void printResult (bool value)
{
    if(value==true)
    {
        cout << "Duplicate Number is present\n";
    }
    else
    {
        cout << "Distinct Number is present\n";
    }
}

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

    bool result = distinctNumber(arr, size);

    printResult(result);
    return 0;
}