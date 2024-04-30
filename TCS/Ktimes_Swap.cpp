#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3, temp, store_initial_result;

    for (int j = 0; j < k; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (i == 0)
            {
                store_initial_result = arr[i];
                arr[i] = arr[i + 1];
            }

            else if (i == 4)
            {
                arr[i] = store_initial_result;
            }

            else
            {
                arr[i] = arr[i + 1];
            }
        }

        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}