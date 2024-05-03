#include <iostream>
using namespace std;

void DrawHollowPyramid(int n)
{
    for (int i = n; i > 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == i || j==n)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    int k = 2 * n - 2;

    for (int i = n; i > 0; i--)
    {

        for (int j = 0; j < n - i; j++)
            cout << "  ";
        k = k - 2;

        for (int j = 0; j < i; j++)
        {
            if(j == 0 || j == i-1 )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    DrawHollowPyramid(n);

    return 0;
}