// Given an array of integers, print sums of all subsets in it. Output sums can be printed in any order.

/*
Input: arr[] = {2,3}
Output: 0 2 3 5

Input: arr[] = {2,4,5}
Output: 0 2 4 5 6 7 9 11
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void f(int arr[], int n, int i, int sum, vector<int> &result)
{
    //base case
    if(i==n)
    {
        result.push_back(sum);
        return;
    }

    //recursive case;
    f(arr,n,i+1,sum+arr[i],result); //pick the ith element
    f(arr,n,i+1,sum,result); //donot pick the ith element.
}



int main()
{
    int arr[] = {2,4,5};
    int n=3;
    vector<int> result;
    f(arr, n, 0, 0,result);
    for(int element: result)
    {
        cout<<element<<" ";
    }
    return 0;
}