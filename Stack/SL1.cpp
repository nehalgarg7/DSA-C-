#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(2);
    s.push(3);
    s.pop();

    cout << s.top();
    if(s.empty())
    {
        cout << "yes" ;
    }
    else{
        cout << "no";
    }

    cout << s.size() ;
    return 0;
}