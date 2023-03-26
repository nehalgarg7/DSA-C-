#include <iostream>
using namespace std;

void process(int *arr, int n)
{
    // inside this function we have the acess of the same array in the main
    for(int i=0; i<n ;i++)
    {
        cout << *(arr+i) <<"\n";
    }

    *(arr+1)=88;
}

int main()
{
    int arr[3] = {14,78,96};

    process(arr,3);

    for(int i=0; i<=2 ;i++)
    {
        cout << *(arr+i) <<"\n";
    }

    return 0;
}