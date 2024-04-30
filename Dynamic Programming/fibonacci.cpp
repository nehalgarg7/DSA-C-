#include <bits/stdc++.h>
using namespace std;

// recursion
// int fibonacci(int n)
// {
//     if(n==1 || n==0)
//     {
//         return n;
//     }

//     return fibonacci(n-1) + fibonacci(n-2);
// }


// Bottom - Up Approach
int fibonacci(int n, vector <int> &dp)
{
    //base case
    //step 1
    if(n<=1)
    {
        return n;
    }

    //step 3
    if(dp[n] != -1)
    {
        return dp[n];
    }

    //step 2
    dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
    return dp[n];
}

int main()
{
    //recursion
    //cout << fibonacci(5);

    int n;
    cin >> n;

    vector <int> dp(n+1);

    for(int i=0; i<=n ; i++)
    {
        dp[i] = -1;
    }

    // bottom up approach --> T.C = O(N) , S.C = O(N)
    cout <<"Bottom Up Approach" << fibonacci(n, dp) <<endl;
    
    
    // top down approach --> T.C. = O(N), S.C = O(N )

    //1st step
    dp [0] = 0;
    dp [1] = 1;

    //2nd step

    for(int i=2; i<=n ; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout <<"Top-Down Approach" << dp[n];


    // Space Optimization

    // 0 1 1 0

    int prev1 = 0 , prev2 = 1;
    int current = -1;

    for(int i=2; i<=n ;i++)
    {
        current  = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    cout << "Space-Optimization" << current; // T.C = O(N), S.C = 0(1)

    return 0;
}