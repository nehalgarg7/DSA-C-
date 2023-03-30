#include<iostream>
using namespace std;




    void dfs(int arr[][n],int vis[][n] ,int i,int j)
    {
        int k=0;
    }

int main()
{
    int m,n;
    cin>>n;

    int arr[m][n],vis[m][n];

    int counter=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>> arr[i][j];
            vis[i][j]=arr[i][j];
        }
    }



    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1 and vis[i][j]==1)
            {
                dfs(arr,vis,i,j);
            }
        }
    }


    return 0;
}
