// Print the sum of value of the array[3,10,3,2,5].

#include <iostream>
using namespace std;

int sum(int arr[],int index, int size)
{
    if(index==size-1)
    {
        return arr[index];
    }
    int result = arr[index] + sum(arr,index+1,size);
    return result;
}

int main()
{
    int arr[5] = {3,10,3,-2,5};
    cout<<sum(arr,0,5);
    return 0;
}