#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << "Enter Array \n";

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        arr.push_back(no);
    }

    vector<int> OnebitsCount;
    for (int i = 0; i < arr.size(); i++)
    {
        int val = arr[i];
        int oneBit = 0;
        while (val >= 1)
        {
            int bitvalue = val % 2;
            if (bitvalue == 1)
            {
                oneBit++;
            }
            val /= 2;
        }
        OnebitsCount.push_back(oneBit);
    }

    for (int i = 0; i < OnebitsCount.size(); i++)
    {
        cout << OnebitsCount[i];
    }

   for (int i = 1; i < n; i++) {
        // use 2 keys because we need to sort both arrays simultaneously
        int key1 =OnebitsCount[i];
        int key2 = arr[i];
        int j = i - 1;
 
        // Move elements of arr[0..i-1] and aux[0..i-1],
        // such that elements of aux[0..i-1] are greater
        // than key1, to one position ahead of their current
        // position
        while (j >= 0 && OnebitsCount[j] < key1) {
            OnebitsCount[j + 1] = OnebitsCount[j];
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        OnebitsCount[j + 1] = key1;
        arr[j + 1] = key2;
    }

    for (int i = 0; i < OnebitsCount.size(); i++)
    {
        cout << OnebitsCount[i];
    }

    cout << "After sorting array\n";
    for (int i = 0; i < OnebitsCount.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}