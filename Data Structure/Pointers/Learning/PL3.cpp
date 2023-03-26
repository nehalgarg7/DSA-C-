// Pointers Arithmetic 

#include<iostream>
using namespace std;
int main()
{
 int x=9,arr[4]={0,20,75,96};

 int *ptr0 = &arr[0];
 int *ptr1 = &arr[1];

 int *ptr2 = &arr[0];

 ptr2 = ptr2 + 1; //Increment operator 
 cout << sizeof(x) <<endl;
 cout << ptr0 << endl << ptr1 << endl << ptr2 <<endl;

 ptr2++;
 cout << "Hello" << *ptr2++ <<endl; // First and Before increment concept came here.
 cout << *ptr2 <<endl;

 ptr2--;
 cout << *ptr2 <<endl;

 cout << *++ptr2 <<endl; //read right to left

 cout << ++*ptr2 <<endl; // This will update the arr[2] from 75->76

 cout << arr[2] <<endl;
return 0;
}