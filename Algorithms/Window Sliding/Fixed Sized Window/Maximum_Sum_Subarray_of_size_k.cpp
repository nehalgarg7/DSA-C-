// Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.

#include <iostream>
using namespace std;

// T.C = O[N] , S.C = O[N]
int windowSlidingTechnique(int arr[], int n, int k)
{
    // if the size of the sub-array is less than the size of the array return -1.
    if (n < k)
    {
        return -1;
    }

    int max_Sum = 0;

    for (int i = 0; i < k; i++)
    {
        max_Sum += arr[i];
    }

    // Here cur_Sum represent the sum of element in the current window.
    int cur_Sum = max_Sum;

    for (int i = k; i < n; i++)
    {
        cur_Sum = cur_Sum + arr[i] - arr[i - k];
        max_Sum = max(max_Sum, cur_Sum);
    }

    return max_Sum;
}

// Navie Approach

int bruteForceApproach(int arr[], int n, int k)
{
    if (n < k)
    {
        return -1;
    }

    int max_Sum = INT8_MIN;
    for (int i = 0; i < n - k + 1; i++)
    {
        int cur_Sum = arr[i];
        for (int j = i + 1; j < i+k ; j++)
        {
            cur_Sum += arr[j];
        }

        max_Sum = max(cur_Sum, max_Sum);
    }
    return max_Sum;
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the maximum size of the sub-array\n";
    cin >> k;

    cout << windowSlidingTechnique(arr, n, k) <<endl;
    cout << bruteForceApproach(arr, n, k) << endl;
    return 0;
}