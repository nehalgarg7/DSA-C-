/***Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]*/
#include <bits/stdc++.h>
using namespace std;

int* missingNumber(int *arr, int size)
{
    sort(arr, arr+size); 

    int check_num = 1;

    int* result = new int{2}; // dynamically allocate a memory to return from function

    for(int i=0; i<size ;i++)
    {
        if(size == 0 || size == 1)
        {

        }
        else if(arr[i]==check_num)  
        {
            check_num++;
        }
        else
        {
            result[1] = check_num; // missing number
            break;
        }
        check_num ++;
    }

    for(int i=0; i<size; i++)
    {
        if(arr[i]==arr[i+1])
        {
           result[0] = arr[i]; // duplicate number
        }
    }
    return result;
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

    int* result = missingNumber(arr, size);
    
    cout << result[0] << " " << result[1] << "\n";
    return 0;
}