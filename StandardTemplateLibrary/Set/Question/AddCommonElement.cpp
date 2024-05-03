/**
 * Add the common elements
 * Given 2 vectors v1 and v2. Find out the common elements between the two and return the sum of them.
 *
 * Input: V1 = {1,1,2,3,3,3}
 *        V2 = {5,6,7,5,2,3,6}
 *
 * Output: 5
 *
 * Explanation: The values common between V1 and V2 are: 2,3. So, sum is 2 + 3 = 5
 */

#include <bits/stdc++.h>
using namespace std;

int bruteForce (vector <int> &v1, vector<int> &v2)
{
    set <int> s1 , s2;

    for(auto value: v1)
    {
        s1.insert(value); 
    }

    // s1 = 1,2,3

    for(auto value: v2)
    {
        s2.insert(value);
    }

    // s2 = 2, 3, 5, 6, 7

    int sum = 0;


    for (auto value : s1)
    {
        if (s2.find(value) != s2.end())
        {
            sum += value;
        }
    }

    return sum;
}

int main()
{
    vector <int> v1 = {1,1,2,3,3,3};
    vector <int> v2 = {5,6,7,5,2,3,6};

    cout << bruteForce(v1,v2);

    return 0;
}