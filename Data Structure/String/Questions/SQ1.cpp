// Sorting of string.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "colloge wallah";

//     int arr [str.size()];

//     for(int i=0;i<str.size();i++)
//     {
//         arr[i]=int(str[i]);
//     }

//     int temp = -9999;

//     for(int i=0;i<str.size();i++)
//     {
//         if(temp <= arr[i])
//         {
//             temp = arr[i];
//         }
//     }

//     int freq [temp+1] = {0};

//     for (int i=0;i<str.size();i++)
//     {
//         freq [arr[i]] = freq[arr[i]] + 1;

//     }

//     for(int i=0;i<=temp;i++)
//     {
//         while(freq[i]!=0)
//         {
//             cout << char(i) << " ";
//             freq[i]--;
//         }
//     }

//     return 0;
// }

// Solving this by using better memory compatiability.

// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "nehal";

//     int freq[26] = {0};

//     for (int i = 0; i < str.size(); i++)
//     {
//         freq[(int(str[i])) - int('a')]++;
//     }

//     for (int i=0;i<26;i++)
//     {
//         while(freq[i]!=0)
//         {
//             cout << char(i+int('a')) << " ";
//             freq[i]--;
//         }
//     }

//     return 0;
// }

// Solving the same thing using vector. // T.C. = O(lenth of string) , S.C = O(26) - Constant

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "nehal";

    vector<int> freq(26,0); 

    for (int i = 0; i < str.size(); i++)
    {
        freq[(int(str[i])) - int('a')]++;
    }

    for (int i=0;i<26;i++)
    {
        while(freq.at(i)!=0)
        {
            cout << char(i+int('a')) << " ";
            freq.at(i)--;
        }
    }
    return 0;
}