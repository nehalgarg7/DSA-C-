// Print duplicate elements in the array

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

    int arr1[10],count=0;

    for(int i=0 ; i<n ;i++)
    {
        int temp= arr[i];
        for(int j=i+1; j<n ;j++)
        {
            if(temp == arr[j])
            {
               arr1[count]=temp;
               count++;
               break;
            }
        }
    }

    for(int i=0;i<count;i++)
    {
        cout << arr1[i]<<endl;
    }

    // NOT ALL TEST CASE WILL PASS

    return 0;
}