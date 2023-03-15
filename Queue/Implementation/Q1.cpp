#include <iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue()
    {
        size = 10000;
        arr = new int[size];
        rear=front=0;
    }
    

    void push(int data)
    {
        if(size==rear)
        {
            cout << "Queue is full";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    void pop()
    {
        if(rear==front)
        {
            cout<<"Queue is empty"<<endl;
            rear=front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }

    int front_view()
    {
        if(rear==front)
        {
            cout << "Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    bool isempty()
    {
        if(rear==front)
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
    Queue s;
    s.push(5);
    s.push(10);
    cout<<s.front_view();
    s.pop();
    cout<<s.front_view();


    return 0;
}