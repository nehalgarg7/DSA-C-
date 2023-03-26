// Delete middle element from the stack

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> s, temp;
    s.push(4);
    s.push(7);
    s.push(9);
    s.push(1);
    s.push(11);
    s.push(10);
    s.push(0);

    int mid = (s.size()/2)+1;

    while(s.size()!=mid)
    {
        temp.push(s.top());
        s.pop();
    }

    s.pop();

    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }

    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}