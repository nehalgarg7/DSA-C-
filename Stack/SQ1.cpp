#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1 (int n)
    {
        if(top2 - top1 >1)
        {
            top1++;
            arr[top1]=n;
        }

        else
        {
            cout << "No space available" << endl;
        }
    }

    void push2 (int n)
    {
        if(top2 - top1 >1)
        {
            arr[top2]=n;
            top2--;
        }

        else
        {
            cout << "No space available" << endl;
        }
    }

    void pop1()
    {
        if (top1 >=0) 
        {
            top1--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    void pop2()
    {
        if (top2 < size) 
        {
            top2++;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }
};

int main()
{
    Stack  st(5);

    st.push1(4);
    st.pop1();
    st.pop1();
    st.pop2();
    return 0;
}