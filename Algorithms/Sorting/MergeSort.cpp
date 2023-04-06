/*
1. Merege sort is based on Divide and Conquer Algorithm.
2. Merege sort is recursive sorting algorithm.
3. T.C = T(n) = n logn,  S.C = O(n).
4. Merge Sort is Stable.
5. Application of Merge Sort -> large datasets, applied in sorting of linked list.
6. Drawbacks -> Slower for smaller tasks\O(n) extra space\ goes through whole process even if array is sorted.
*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    // create two temporary array
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];

    // fill both the array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // fill the orginal array with sorted sub-arrays.

    int i = 0, j = 0, k = l; // i,j,k to traverse array a,b,arr respectively

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k++] = a[i++];
            // i++;
            // k++;
        }
        else
        {
            arr[k++] = b[j++];
            // j++;
            // k++;
        }
    }

    // Now if two any element left unfilled then filled it.

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    // base case
    if (l >= r)
    {
        return;
    }

    // recursive case
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);     // sort the first half part of the array.
    mergeSort(arr, mid + 1, r); // sort the second half part of the array.
    merge(arr, l, mid, r);      // merge the two different sorted array.
}

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}