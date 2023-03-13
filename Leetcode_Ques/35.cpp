#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0 ; i< n ;i++)
    {
        cin >> arr[i];
    }

    int key;
    cin>> key;

    int low=0 , high =n-1;

    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]==key)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(mid==low && mid==high)
        {
            cout<<mid<<endl;
            return 0;
        }
        else if (arr[mid]>key)
        {
            high=mid-1;
        }
        else if (arr[mid]<key)
        {
            low =mid+1;  
        }
    }

    return 0;
}

/*

1   3    4 5 6 


*/