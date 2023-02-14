//  Binary Search is used for sorted array.

#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,4,7,8,9};

    int key=4;

    int low=0 , high =4;

    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at"<<mid<<"position"<<endl;
            return 0;
        }
        else if (arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low =mid+1;  
        }
    }

    return 0;
}