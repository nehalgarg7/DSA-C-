// Toeplitz Matrix

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    int arr[m][n];

    for(int i=0; i<m ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0 ;i<m-1; i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[i][j]!=arr[i+1][j+1])
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}