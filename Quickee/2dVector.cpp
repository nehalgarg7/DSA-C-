#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Take Input

    //1st Way
            // string str = "{(nehal,26,A,Male),(hritik,15,B,Female)}";
            // str.erase(str.begin());
            // str.erase(str.end() - 1);

            // for(int i=0; i<str.size(); i++)
            // {
            //     if(str[i] == '(' || str[i] == ')')
            //     {
            //         str.erase(str.begin() + i);
            //     }
            // }

            // cout << "After Erase" << str;

            // vector<string> whole;

            // stringstream ss(str);

            // string token;
            // char delimiter = ',';

            // while(getline(ss, token, delimiter))
            // {
            //     whole.push_back(token);
            // }

            // for(auto e:whole)
            // {
            //     cout << e << endl;
            // }

    // 2nd Way

    string str = "{(nehal,26,A,Male),(hritik,15,B,Female)}";
            str.erase(str.begin());
            str.erase(str.end() - 1);

            for(int i=0; i<str.size(); i++)
            {
                if(str[i] == '(' || str[i] == ')')
                {
                    str.erase(str.begin() + i);
                }
            }





























    // vector<vector<string>>  a;

    
    // for(int i=0; i<a.size(); i++)
    // {
    //     for(int j=0;j<a[i].size() ;j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    stringstream ss(str);

    //while(getline(ss, token, delimilter))
    return 0;
}