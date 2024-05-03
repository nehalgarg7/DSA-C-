#include <bits/stdc++.h>
using namespace std;

void countTotalAmount(int n, vector<int> &money, vector<int>& values)
{
    float totalAmount = 0;
    float cent = 0;

    for(int i=0;i<n;i++)
    {
        if(i<=1)
        {
            cent = cent + ( money[i] * values[i] );
        }
        else
        {
            float dollar = 0;
            dollar =  money[i] * values[i];
            totalAmount += dollar;
        }
    }

    float cent_to_dollar = cent/100;

    totalAmount += cent_to_dollar;

    cout << setprecision(1) << fixed << totalAmount << endl;
}

int main()
{
    int n = 6;
    vector<int> values {20,40,1,2,5,10};
    vector<int> money;
    for(int i=0; i<6; i++)
    {
        int a;
        cin >> a;
        money.push_back(a);
    }

    countTotalAmount(n, money, values);
    return 0;
}