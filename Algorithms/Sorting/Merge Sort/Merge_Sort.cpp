#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    return 0;
}