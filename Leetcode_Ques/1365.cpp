#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    int temp[size];

    for(int i=0;i<size;i++)
    {
        int counter=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                counter++;
            }
        }
        temp[i]=counter;
    }

    for(int i=0 ; i<size; i++)
    {
        cout << temp[i];
    }

    return 0;
}