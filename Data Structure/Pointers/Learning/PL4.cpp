// Array as a Pointer

#include <iostream>
using namespace std;
int main()
{
    int arr [3]  = { 45, 89 , 75} ;

    int *ptr = &arr[0];

    cout << ptr << endl <<arr <<endl;
    cout << *ptr << endl <<*(arr+1) <<endl;

    int a[3] = {1,2,3};
    int (*p) [3] = &a;

    cout << p << " " <<a <<endl << *p << " " <<*a <<endl;
    return 0;
}