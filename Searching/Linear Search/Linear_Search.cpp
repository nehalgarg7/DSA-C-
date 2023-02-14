#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,7,8,9,4};

    int key=2;

    for(int i=0; i<5 ;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Key element found\n"<<arr[i]<<"at "<<i<<"positon"<<endl;
            return 0;
        }
        else
        {
            cout<<"Not found\n";
        }
    }

    return 0;
}