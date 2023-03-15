#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x; // Data_type *pointer_name

    cout << x <<endl<<ptr<< endl;


    float y = 10;
    float *ptry = &y;

    cout << y <<endl<<ptry<< endl;

    int *ptv;
    cout << ptv <<endl;
    ptv = &x;
    cout << ptv << endl << *ptv /*Dereferencing*/ <<endl;

    *ptv = 56;
    cout << *ptv <<endl<< x << endl << ptv <<endl;
    return 0;
}