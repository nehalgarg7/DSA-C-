// size
/**
 * cin >> size;
 *
 * for(int i=0; i<size; i++)
 * {
 *  int num;
 * cin >> num;
 *
 * arr.push_back(num);
 * }
 *
 * 1 2 3 7 4 5
 * 1,2,3,7,4,5
 * [1,2,3,7,4,5] or {1,2,3,7,4,5} str.erase(str.begin()); str.erase(str.end()-1);
 *
 * Ques: 3 students -> name, age, grade , gender
 * Input: ABC 22 C MALE
 *        XYZ 23 D FEMALE
 *        PQR 24 A MALE
 *
 * Find out ? Avg age ? Number of female
 */

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1st approach
    /*
    vector<int> arr;

    int num;

    while(cin >> num)
    {
        arr.push_back(num);
    }

    for(auto ele : arr)
    {
        cout << ele << " ";
    }
    */

    // 2nd approach
    /*

    string str;
    vector<int> arr;

    getline (cin, str);// str = "1 2 3 4" "1,2,3,4"

    //1st and 2nd step;

    // stringstream ss(str);

    // string token;
    // char delimiter = ' '; // ','

    // while (getline(ss, token, delimiter))
    // {
    //     arr.push_back(stoi(token));
    // }

    for (auto ele : arr)
    {
        cout << ele <<" ";
    }
    */

    // command : ctrl + z + enter (VSCODE .. WINDOWS MEIN)

    // Ques: arr = 5s, 6s, 7s  55567766 55566677

    /**
     * Input : n-> size
     *         [1,2,3,5,6] -> arr[n]
     *
     * Actual Input: 1 2 3 5 6
     *
     * Code (Compile) (Run)
     *
     * test case 1 failed -> Input // expected output // your output
     * test case 2 failed
     *
     */

    string str = "112,2,3,4"; //"112 2 3 4", "112,2,3,4"

    vector<int> nums;
    string temp = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ',')
        {
            if (temp != "")
            {
                nums.push_back(stoi(temp));
                temp = "";
            }
        }
        else if (str[i] != ',')
        {
            temp += str[i];
        }
    }
    nums.push_back(stoi(temp));

    for (auto ele : nums)
    {
        cout << ele << " ";
    }

    return 0;
}