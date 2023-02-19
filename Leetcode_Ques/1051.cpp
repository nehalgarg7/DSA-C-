#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h[n] , e[n];

    for(int i=0; i<n ;i++)
    {
        cin >> h[i];
        e[i] = h[i];
    }

    for(int i=0;i<n;i++)
    {
        for (int j= i+1 ;j <n ;j++)
        {
            if(e[i]>e[j])
            {
                int temp = e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }


    int counter = 0;

    for(int i=0 ;i<n;i++)
    {
        if(h[i] !=e [i])
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}