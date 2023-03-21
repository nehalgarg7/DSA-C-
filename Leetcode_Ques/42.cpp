#include <iostream>
using namespace std;

int main()
{
    int n, result = 0;
    cout << "Enter n" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left[n], right[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            left[i] = 0;
        }
        else
        {
            int temp = arr[i - 1];
            for (int j = 0; j <= i - 1; j++)
            {
                if (temp <= arr[j])
                {
                    temp = arr[j];
                }
            }
            left[i] = temp;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            right[i] = 0;
        }
        else
        {
            int temp = arr[i + 1];
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (temp <= arr[j])
                {
                    temp = arr[j];
                }
            }
            right[i] = temp;
        }
    }

    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (left[i] >= right[i])
        {
            temp[i] = right[i] - arr[i];
        }
        else
        {
            temp[i] = left[i] - arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] <= 0)
        {
        }
        else
        {
            result = result + temp[i];
        }
    }

    cout << "Result: " << result;
    return 0;
}