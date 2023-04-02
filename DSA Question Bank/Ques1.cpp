/*
Write a program to reverse an array or string.
*/

#include <iostream>
using namespace std;
// Syntax to call an array as a reference. 
void swapArray(int arr[],int size) 
{
    int start = 0;
    int end = size-1;

    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return ;
}

void print(int arr[],int size)
{
   for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr,size);
    swapArray(arr,size);
    print(arr,size);
    return 0;
}