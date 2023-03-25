// Count sort.. practice in array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:"<<endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int temp = -9999;

    for(int i=0;i<n;i++)
    {
        if(temp <= arr[i])
        {
            temp = arr[i];
        }
    }


    cout << temp;

    int freq [temp+1] = {0};

    for (int i=0;i<n;i++)
    {
        freq [arr[i]] = freq[arr[i]] + 1;
        
    }

    cout << "freq array" <<endl;

    for(int i=0 ;i <=temp; i++)
    {
        cout << freq[i];
    }

    cout << "Started storing \n";

    for(int i=0;i<=temp;i++)
    {
        while(freq[i]!=0)
        {
            cout << i << " ";
            freq[i]--;
        }
    }
    return 0;
}