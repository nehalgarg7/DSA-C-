// abcabcbb

#include <iostream>
using namespace std;
int main()
{
    string finalresult = "", temp = "", s = "pwwkew";
    int finalsize = 0, tempsize = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (temp == "")
        {
            temp += s[i];
            tempsize = 1;
            finalresult = temp;
            finalsize = tempsize;
        }
        else
        {
            int count = 0;
            for (int j = 0; j < tempsize; j++)
            {
                if (temp[j] == s[i])
                {
                    if (tempsize >= finalsize)
                    {
                        finalresult = temp;
                        finalsize = tempsize;
                        temp = s[i];
                        tempsize = 1;
                    }
                    else
                    {
                        temp = s[i];
                        tempsize = 1;
                    }
                    break;
                }
                else
                {
                    count++;
                }
            }
            if (count == tempsize)
            {
                temp += s[i];
                tempsize++;
                if (tempsize >= finalsize)
                {
                    finalresult = temp;
                    finalsize = tempsize;
                }
            }
        }
    }
    cout << finalsize;
    return 0;
}