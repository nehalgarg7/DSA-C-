#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input code

    vector<char> arr;
    char ele;

    while (cin >> ele)
    {
        arr.push_back(ele);
    }

    // convert to string

    string n = "";

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            n += arr[i];
        }
    }

    cout << n;

    int number = stoi(n);

    if (number % 9 == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}