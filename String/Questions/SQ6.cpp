// Given a binary string and an integer k, return the maximum number of consecutive 1's in the string if you can flip at most k 0's.

// Input: "0001101011", k=2
// Output: 7


//Sliding window technique
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestOnes(string str,int k)
{
    int start=0,end=0,zero_count=0,max_length=0;

    for(;end <str.length()-1;end++)
    {
        if(str[end]=='0')
        {
            zero_count++;
        }

        while(zero_count>k)
        {
            if(str[start]=='0')
            {
                zero_count--;
            }
            start++; //contracting our window
        }

        //zero_count <=k
        max_length=end-start+1;
    }
    return max_length;
}

int main()
{
    string str;
    cin>>str;

    int k;
    cin>>k;

    cout<<longestOnes(str,k)<<endl;

    return 0;
}