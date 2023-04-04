// Given an array of n integers and a target value x. Print whether x exists in the array or not.

#include <iostream>
using namespace std;

bool present(int arr[],int index,int size,int x)
{

    // base case
    if(index==size-1)
    {
        return (arr[index]==x)?true:false;
    }

    // if(arr[index]==x) //same thing written different style.
    // {
    //     return true;
    // }
    // else
    // {
        return(arr[index]==x)||present(arr,index+1,size,x);
    //}
}

int main()
{
    int arr[] ={5,4,1,8,6,-9,8,2,3,5};
    cout<< present(arr,0,10,8);

    return 0;
}