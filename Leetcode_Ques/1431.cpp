#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],boole[n]={0};
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int max;
    cin>> max;
    
    
    
    for(int i=0;i<n;i++)
    {
        int temp = (arr[i]+max);
        for(int j=0 ; j<n; j++)
        {
            if(temp >= arr[j])
            {
                boole[i]=1;
            }
            else
            {
                boole[i]=0;
                break;
            }
        }
    }
    
    
    for(int i=0; i<n ;i++)
    {
        cout<< boole[i];
    }
    return 0;
}