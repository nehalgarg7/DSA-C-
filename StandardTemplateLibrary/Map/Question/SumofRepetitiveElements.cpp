/*
Ques: You are given an integer n, representing the number of elements. Then , you will be given n elements. You have to return the sum of
repetitive elements i.e. the elements that appear more than one time.

Input:
n = 7
Elements = [1,1,2,1,3,3,3]

Output: 4
*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map <int, int> elementCount;

    for(int i=0; i<n;i++)
    {
        int num;
        cin >> num;
        elementCount[num]++;
    }

    int sum = 0;

    for( auto ele: elementCount)
    {
        if(ele.second > 1)
        {
            sum += ele.first;
        }

        //cout << ele.first << " -> " << ele.second << endl;
    }

    cout << sum;
    return 0;
}