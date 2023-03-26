// // TC = O(n)+O(m){Can be considered as linear also}...since n>>m therefore we can say that it is O(n)
// // SC = O(m) {Extra space for LPS array}

// /*
// Applications : Best applied when the text and pattern has a lot of repeated characters.

// Eg - > DNA pattern matching

// Only the chracters A C G T are repeated in the DNA.
// */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void computeLPSArray(string pattern, int m, int* lps)
{
    int len = 0 ; // Length of the previous longest prefix suffix
    lps[0] = 0; // lps[0] is always 0

    // the loop calculates lps[i] for i = 1 to m-1
    int i = 1;
    while (i < m)
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0)
            {
                len = lps[len -1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KunthMorissPrattSearch(string text,string pattern)
{
    int n = text.size();
    int m = pattern.size();

    int lps[m];

    computeLPSArray(pattern,m,lps);

    int i=0; // index for txt[]
    int j=0; // index for pat[]

    while((n-i)>=(m-j))
    {
        if(pattern[j] == text[i])
        {
            j++;
            i++;
        }

        if (j==m)
        {
            cout << "Pattern Found at the index :" << i-j<<endl;
            j = lps [j-1];
        }

        // mismatch after j matches
        else if (i<n && pattern[j] != text[i]) 
        {
            if (j !=0 )
            {
                j = lps[j-1];
            }
            else
            {
                i = i + 1;
            }
        }
    }

}

int main()
{
    string text,pattern;
    cout<< "Enter the text and pattern\n";
    cin>>text>>pattern;

    KunthMorissPrattSearch(text,pattern);
}
