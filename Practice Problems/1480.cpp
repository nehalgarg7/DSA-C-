#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter n elements:" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum[n],sum1=0;

    for(int i=0;i<n;i++)
    {
        sum[i]=sum1+arr[i];
        sum1=sum[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<endl;
    }

    return 0;
}