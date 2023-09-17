/***Q4.** You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.

Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/
#include <bits/stdc++.h>
using namespace std;

void plusOne(vector<int> &digits)
{
    int rem = 0, k = 0;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        digits[i]++;
        if (digits[i] < 10)
        {
            break;
        }
        else if (digits[i] == 10)
        {
            digits[i] %= 10;
            k++;
        }
    }
    if (k == digits.size())
    {
        reverse(digits.begin(), digits.end());
        digits.push_back(1);
        reverse(digits.begin(), digits.end());
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: \n";
    cin >> size;

    cout << "Enter the element of the array: \n";
    vector<int> digits;
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        digits.push_back(temp);
    }

    plusOne(digits);

    cout<<"Result: ";
    for(int i=0; i<digits.size(); i++)
    {
        cout<<digits[i];
    }
    return 0;
}