// Print the max value of the array[3,10,3,2,5].

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxValue(int arr[], int index, int size)
{
    if(size==0)
    {
        return -1; 
    }
    else if(index==size-1)
    {
        return arr[index];
    }
    int result = max(arr[index],maxValue(arr,index+1,5));
    return result;
}

int main()
{
    int arr[5] = {3,10,3,2,5};
    cout << maxValue(arr,0,5);
    return 0;
}