//  Encoded string to decode it. The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.

// Note : The occurrence of a single string is less than 1000.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// check what have you done wrong here.
// string EncodeAndDecode (string s)
// {
//     string result="";
//     for(int i=0; i<s.size();i++)
//     {
//         if(s[i]!=']')
//         {
//             result+=s[i]; // ok
//         }
//         else
//         {
//             string temp="";
//             int j=result.size()-1;
//             while(result[j]!='[')
//             {
//                 temp+=result[j];
//                 result.erase(result.end());
//                 j--;
//             }
//             reverse(temp.begin(),temp.end());
//             result.erase(result.end());
//             string num="";
//             int k = result.size()-1;
//             while(s[k]>='0' && s[k] <= '9')
//             {
//                 num+=result[k];
//                 result.erase(result.end());
//                 k--;
//             }
//             int n = stoi(num);
//             for(int l=0;l<n;l++)
//             {
//                 result+=temp;
//             }
//         }
//     }
//     return result;
// }


// T.C = O(n) and S.C. = O(n), where n is length of decoded string.
string EncodeAndDecode (string s)
{
    string result="";
    // traversing the encoded string
    for(int i=0; i<s.size();i++)
    {
        if(s[i]!=']')
        {
            result.push_back(s[i]);
        }
        else
        {
            // extract str from result
            string temp="";
            while(result.back()!='[' && !result.empty())
            {
                temp.push_back(result.back());
                result.pop_back();
            }

            //reversing the str
            reverse(temp.begin(),temp.end());

            //remove last char from result which is [
            result.pop_back();

            // extract num from result
            string num="";
            while(!result.empty() && (result.back()>= '0' && result.back()<='9'))
            {
                num.push_back(result.back());
                result.pop_back();
            }
            
            // reversing the num string
            reverse(num.begin(),num.end());

            // convert  string to integer
            int int_num = stoi(num);

            // inserting str in result int_num items
            while(int_num!=0)
            {
                result+=temp;
                int_num--;
            }
        }
    }
    return result;
}

int main()
{
    string s;
    cout<<"Enter the string\n";
    cin>>s;

    cout << EncodeAndDecode(s);

    return 0;
}