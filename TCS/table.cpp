// Sum of table
 
#include <bits/stdc++.h>
using namespace std;

int add (int n)
{
    int sum = 0;

    for (int i=1; i<=10; i++)
    {
        sum += i*n;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << add(n);
    return 0;
}