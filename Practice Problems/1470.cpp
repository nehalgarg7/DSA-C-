#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int arr[(2*n)];
    for(int i=0;i<(2*n);i++)
    {
        cin>>arr[i];
    }

    int counter1=0 , counter2=n;

    int arr1[2*n];

    for(int i=0; i<(2*n); i++)
    {
        if(i%2==0)
        {
            arr1[i]=arr[counter1];
            counter1++;
        }
        else
        {
            arr1[i]=arr[counter2];
            counter2++;
        }
    } 

    for(int i=0; i<(2*n); i++)
    {
        cout<< arr1[i]<< endl;
    }

    return 0;
}