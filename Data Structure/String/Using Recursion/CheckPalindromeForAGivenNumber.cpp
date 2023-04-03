// Write a program to check whether a given number is palindrome or not.?

#include <iostream>
using namespace std;

bool Check(int num,int *temp)
{
    //base case
    if(num >= 0 and num <= 9)
    {
        int lastDigitOftemp = (*temp)%10;
        (*temp) /= 10;
        return (num == lastDigitOftemp);
    }
    bool result = (Check(num/10,temp) && (num%10) == ((*temp) %10));
    (*temp) /=10;
    return result; 
}


int main()
{

    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<Check(num,temp);
    return 0;
}