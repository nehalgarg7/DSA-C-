// Valid parenthesis

#include <iostream>
#include <stack>
using namespace std;
int main()
{

    string expression = "{()}";
    stack<char> s;

    for(int i=0; i<expression.length(); i++)
    {
        char ch = expression[i];

        // if opening bracket, stack push
        
        // if closing bracket, stack pop

        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if( ch == ')' && top == '(' || 
                ch == '}' && top == '{' ||
                ch == ']' && top == '[')
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if(s.empty())
    {
        cout<<"Valid";
    }
    else 
    {
        cout<<"Invalid";
    }

    return 0;
}