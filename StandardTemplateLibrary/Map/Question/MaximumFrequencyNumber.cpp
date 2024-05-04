/*
Ninja is given an array of integers that contain numbers in random order. He needs to write a program to find and return the number which occurs the maximum times in the given input. He needs your help to solve this problem.

If two or more elements contend for the maximum frequency, return the element which occurs in the array first, i.e. whose index is lowest.

Ex: Input: {1,2,3,1,2} Output: 1
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);

    unordered_map<int, int> count;
    int maxfrequency = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++;
        maxfrequency = max(maxfrequency, count[arr[i]]);
    }

    for(int i=0;i<arr.size();i++)
    {
        if(maxfrequency = count[arr[i]])
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}