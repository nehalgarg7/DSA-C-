/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, 
return the area of the largest rectangle in the histogram.
Input: heights = [2,1,5,6,2,3]
Output: 10
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter n elements:" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Logic For the Given Ques.

    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                temp=temp+arr[i];
            }
            else
            {
                break;
            }
        }
        arr[i]=temp;
    }

    // Print Largest Number of an Array

    int temp=arr[0];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }

    cout << "Largest area : " << temp << endl;

    return 0;
}