// Find p to the power q using recursion..

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int PToThePowerQ(int p, int q) // T.C , S.C = O(q)
{
    //base case
    // if(p==0 && q==0)
    // {
    //     cout<<"Not a valid expression"<<endl;
    //     return -1;
    // }
    // else 
    if(q==0)
    {
        return 1;
    }

    //recursive case

    int result = p * PToThePowerQ(p,q-1);
    return result;
}

// Another approach much better Time Complexity.
int Evaluation(int p, int q) // T.C = O(log q)
{
    //base case
    if(q==0)
    {
        return 1;
    }

    //recursive case
    if(q%2==0)
    {
        int result = pow(Evaluation(p,q/2),2);
        return result;
    }
    else
    {
        int result = p* pow(Evaluation(p,(q-1)/2),2);
        return result;
    }
}


int main()
{
    cout<<PToThePowerQ(4,10);
    cout<<Evaluation(4,10);
    return 0;
}