// Try to do this binary search, linear search

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


    return 0;
}