//Failed.
#include <iostream>
using namespace std;
int main()
{
    int size;
    cin>> size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }

    int j=0,i=j+1,count=0;
    while(i<=size-1)
    {
        if(arr[i]!=arr[j])
        {
            arr[i]=arr[j];
            i++;
            count++;
        }
        else
        {
            i++;
        }
    }
    cout << count;
    return 0;
}