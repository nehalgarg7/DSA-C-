// Given a number n. Find the increasing sequence from 1 to n without using any loop.

#include <iostream>
using namespace std;

void increasingSequence(int n , int i)
{
    //base case
    if(i==n)
    {
        cout<<n;
        return ;
    }

    //recursive case
    cout<<i<<" ";
    increasingSequence(n,i+1);
}

//another approach.
void print(int n)
{
    if(n<1)
    {
        //cout<<n<<" "; in this u need to have condition (n==1)
        return;
    }

    print(n-1); //Thought : Recursive function print the first n natural number. I will just print n.
    cout<<n<<" ";
}

int main()
{
    increasingSequence(5,1);
    print(5);
    return 0;
}