// Referencing and Pointer Concept

/*
#include <iostream>
using namespace std;

int& fun()
{
	static int x = 10;
	return x;
}

int fun1(int& x) { return x; }

int main()
{
	fun() = 30;
	cout << fun();

    int a = 10; 

    //cout << fun1(10); // throw error
    cout << fun1(a);
	return 0;
}
*/

#include <iostream>
using namespace std;
  
void swap(char*& str1, char*& str2)
{
    char* temp = str1;
    str1 = str2;
    str2 = temp;
}
  
int main()
{
    const char* str1 = "GEEKS"; // acts as string constant also.
    const char* str2 = "FOR GEEKS"; // // acts as string constant also.
    swap(str1, str2); 
    cout << "str1 is " << str1 << '\n';
    cout << "str2 is " << str2 << '\n';
    return 0;
}