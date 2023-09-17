// Given an array A[] of size N and a positive integer K, Print the first negative integer for each and every window(contiguous subarray) of size K.
#include <iostream>
using namespace std;

void windowSlidingTechnique(int arr[], int *ans[], int n, int k)
{
    int index = -1;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << endl;
            index = i ;
            break;
        }
    }

    
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;

    int arr[n], ans[n] = {-1};
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the maximum size of the sub-array\n";
    cin >> k;
    return 0;
}