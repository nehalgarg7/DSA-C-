// Remove duplicated elements from sorted array

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

    int count1=0;

    for(int i=0 ; i<n ;i++)
    {
        int temp = arr[i];

        for(int j=i+1 ; j< n ;j++)

        {
            if(temp==arr[j])
            {
                i++;
            }
        }

        arr[count1]=temp;
        count1++;
    }

    for(int i=0; i<count1 ; i++)
    {
        cout << arr[i]<<endl;
    }


    return 0;
}