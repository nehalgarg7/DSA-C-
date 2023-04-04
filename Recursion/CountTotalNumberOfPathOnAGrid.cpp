/*
The problem is to count all the possible paths on an m×n grid from top left (grid[0][0]) to bottom right (grid[m-1][n-1]).

Having constraints that from each cell you can either move only to right or down.

Input: m=2 , n=3
Output: 3
*/

#include <iostream>
using namespace std;

int f(int i, int j,int m, int n)
{
    //base case
    if(i==m-1 and j==n-1) //reach the end point.
    {
        return 1;
    }
    if(i>=m or j>=n) //went away from matrix.
    {
        return 0;
    }

    //recursive case.
    return f(i,j+1,m,n) + f(i+1,j,m,n);
}

int main()
{
    cout<<f(0,0,3,2);
    return 0;
}