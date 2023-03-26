//String matching algorithm. Compare the child string with parent string for every index.

/*

Best Case : The first character of the pattern is not present is text at all.
TC : O(n)
txt[] = "aaaaa";
pat[] = "ba";

Worst case: T.C. = O(n*(m+1))

1. All Characters of the text and pattern are same.

txt[] = "aaaaa";
pat[] = "aaaa";

2. Only the last character is different.

txt[] = "aaaab";
pat[] = "aaab";

*/




#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void NavieStringMatching(string text,string pattern)
{
    int n=text.size(); //storing the size of string s1(from which other string is gonna be match)
    int m=pattern.size(); //storing the size of search string s2(which has to be match)

    for(int i=0;i<=n-m;i++) // iterating a loop from [0-(n-m)] for s1
    {
        for(int j=0;j<m;j++) // iterating a loop from [0-(m-1)] for s2
        {
            if(text[i+j]!=pattern[j]) // break if pattern not match else keep incrementing j
            {
                break;
            }

            if(j==m-1) // if j == [s2.size() -1] print found
            {
                cout << "Pattern found at the end index i: "<< i <<endl;
            }
        }
    }
    
}

int main()
{
    string text,pattern;
    cin>>text>>pattern;

    NavieStringMatching(text,pattern); //s1="aaabacdab" s2="ab"
    return 0;
}