#include <iostream>
using namespace std;
int main()
{
    int *ptr; // Wild Pointer
   // cout << ptr <<endl << *ptr <<endl;

    int *ptf = NULL; // NULL Pointer
    int *p = 0;// NULL Pointer "Since 0 is mostly a special reserved memory address"
    int *ppp ='\0';// NULL Pointer

   // cout << ptf <<endl << *ptf <<endl;

    float i = 10.2;
    void *ptr1 = &i;

    int *l = (int *)ptr1; // Void pointer can be typecase but cannot be dereferenced.

    cout << *l;


    return 0;
}