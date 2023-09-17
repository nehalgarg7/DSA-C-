/***Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

**Example 1:**
Input: nums = [1,3,5,6], target = 5

Output: 2
*/
#include <bits/stdc++.h>
using namespace std;

int searchIndex(int *arr, int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int missingPosition(int *arr, int &size, int target)
{

    arr[size] = target;
    size++;

    sort(arr, arr + size);
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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

    int target;
    cout << "Enter the target element\n";
    cin >> target;

    int result = searchIndex(arr, size, target);
    if (result == -1)
    {
        cout << missingPosition(arr, size, target);
    }
    else
    {
        cout << result;
    }
    
    return 0;
}