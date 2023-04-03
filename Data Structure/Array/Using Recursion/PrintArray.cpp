// Print an array using recursion.

#include <iostream>
using namespace std;

void recursion(int arr[],int index, int size) // T.C = O(N) , S.C = O(N) , where n is the size of the array.
{
    if(size==0 || index==size)
    {
        return;
    }
    cout<<arr[index]<<" "; // use this to print an array from start -> end.
    recursion(arr,index+1,size);
    //cout<<arr[index]<<" "; // use this print an array in reverse order.
}

int main()
{
    int arr[5]={1,2,3,4,5};
    recursion(arr,0,5);
    return 0;
}