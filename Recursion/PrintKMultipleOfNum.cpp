// Given a number num and a value k. Print k multiples of num.

#include <iostream>
using namespace std;

void printKmultiplesOfNumber(int num, int k)
{
    // base case
    if (k < 1)
    {
        return;
    }
    printKmultiplesOfNumber(num, k - 1);
    cout << num * k << " ";
}

int main()
{
    printKmultiplesOfNumber(12, 5);
    return 0;
}