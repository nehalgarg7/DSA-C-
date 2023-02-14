#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the sorted array"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;

    cout<<"Enter the key element to search"<<endl;
    cin>>key;


    // Finiding the block for the jump search

    int start=0;
    int end=sqrt(n);

    while(arr[end]<=key && end< key)
    {
        start = end;
        end += sqrt(n);

        if(end>n-1)
        {
            end=n;
        }
    }

    // Applying linear search on finded block

    for(int i=start ; i<end ;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at position "<<i<<endl;
        }
    }

    return 0;
}