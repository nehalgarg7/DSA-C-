#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    
    int arr[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int sum[m];
    for(int i=0;i<m;i++)
    {
        int sum1=0;
        for(int j=0;j<n;j++)
        {
            sum1=sum1+arr[i][j];
        }
        sum[i]=sum1;
    }
    
    for(int i=0;i<m;i++)
    {
        cout<<sum[i]<<endl;
    }
    return 0;
}