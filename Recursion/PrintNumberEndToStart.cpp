// Print numbers from 5 to 1

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    else
    {
        cout << n;
        print(n - 1);
    }
}

void print1(int n)
{
    if (n == 6)
    {
        return;
    }
    else
    {
        cout << n;
        print1(n + 1);
    }
}

int main()
{
    print(5);
    print1(1);
    return 0;
}