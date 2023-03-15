#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue <int> q;
    q.push(11);
    q.push(12);

    cout<< q.size();
    q.pop();
    cout<<q.front();
    return 0;
}