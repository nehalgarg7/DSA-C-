/*
There are N stones, numbered 1,2,....N. For each i(1<=i<=N), the height of Stone i is hi. There is a frog who is intially on Stone 1. He will repeat the following action some number of times to reach Stone N:

If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of |hi - hj| is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches stone N.

Input: n=4 ,arr[] = 10 30 40 20
Output: 30
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// mylogic works for some test case but it is wrong.
int re(int *arr, int index, int size) // segmentation fault occurs for some test case.
{
    // base condition
    if (index == size - 1)
    {
        return 0;
    }
    if (index == size - 2)
    {
        return (abs(arr[index] - arr[index + 1])) + re(arr, index + 1, size);
    }

    // recursive condition
    if ((abs(arr[index] - arr[index + 1])) >= (abs(arr[index] - arr[index + 2]))) // Here when you are at index 6, you make a call of 2 steps which is wrong. Since max index ==7 not 8.//segmentation call occurs. so for this if you to apply a base condition on second last and last element.
    {
        int cost = ((abs(arr[index] - arr[index + 2])) + re(arr, index + 2, size));
        return cost;
    }
    else
    {
        int cost = (abs(arr[index] - arr[index + 1])) + re(arr, index + 1, size);
        return cost;
    }
}

int f(int *h, int n, int i)
{
    // base case
    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return f(h, n, i + 1) + abs(h[i] - h[i + 1]);

    int result = min(f(h, n, i + 2) + abs(h[i] - h[i + 2]), f(h, n, i + 1) + abs(h[i] - h[i + 1]));
    return result;
}

int main()
{
    int arr[] = {70, 30, 30, 30, 45, 17, 5, 2,19}; // 40 + 13 + 12 + 3 + 17 = 85 {My code is logic is wrong. Sir logic is right.} // see voice mssg on self whtsapp no.

    cout << f(arr, 9, 0);
    cout << endl;
    cout << re(arr, 0, 9);
    return 0;
}