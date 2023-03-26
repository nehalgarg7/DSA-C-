// Stack Implementation using Array

#include <iostream>
using namespace std;

class Stack {
    public : 
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size =size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top > 1) 
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >=0) 
        {
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if(top >=0 )
        {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
            return -1;
        }

    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main()
{

    Stack st(5);

    st.push(22);
    st.push(33);
    st.pop();

    cout << st.peek();

    if(st.isempty())
    {
        cout << "yes" ;
    }
    else{
        cout << "no";
    }

    return 0;
}