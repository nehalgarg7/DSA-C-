// Next smaller element

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    stack<int> s;
    s.push(-1);

    vector <int> ans(5);

    int arr[5] = {1,2,5,7,3};

    for(int i=4; i>=0 ;i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] =s.top();
        s.push(curr);
    }

    cout <<ans[0]<< ans[1] <<ans[2] <<ans[3] <<ans[4]  ;

    return 0;
}