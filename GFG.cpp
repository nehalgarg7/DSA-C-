#include <bits/stdc++.h>
using namespace std;

int distinctCount(string &s, int size, int k)
{
    int count = 0; // def
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }

    count++;

    if (count == k)
    {
        return size; // hogya.. update max
    }
    else
    {
        return -1; // not possible
    }
}

int subsequence(vector<string> &subsequenceArray, int size, vector<string> &s)
{
   
    int ans = 0 , k = 5;
    unsigned int opsize = pow(2, size);

    for (int counter = 1; counter < opsize; counter++)
    {
        
        string temp = "";
        int size1 = 0;
        for (int j = 0; j < size; j++)
        {
            if (counter & (1 << j))
            {
                temp += s[j];
                size1++;
            }
        }
        cout << temp << endl;
        int val = distinctCount(temp, size1, k);

        if(val!= -1)
        {
            ans = max(ans, val);
        }
    }
    return ans;
}

// int result(vector<string> &subsequenceArray, int k)
// {
//     int size = subsequenceArray.size();
//     int ans = 0;

//     for (int i = 0; i < size; i++)
//     {
//         int val = distinctCount(subsequenceArray[i], k);

//         if (val != -1)
//         {
//             ans = max(ans, val);
//         }
//     }

//     return ans;
// }

int main()
{
    int n = 4, k = 5;
    vector<string> s;
    s.push_back("si");
    s.push_back("f");
    s.push_back("g");
    s.push_back("h");
    vector<string> subsequenceArray;
    
    int ans = subsequence(subsequenceArray,  n , s);
    
    //int ans =  result(subsequenceArray, k);
    cout << ans;
    return 0;
}