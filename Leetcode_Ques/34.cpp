#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int key;

    cin >> key;

    int result[2]={-1,-1};

    int low=0 , high =n-1;

    while(low<=high)
    {
        if(arr[low]!=key && arr[high]!=key)
        {
            low++;
            high--;
        }

        else if(arr[low]==key && arr[high]!=key)
        {
            result[0]=low;
            high--;
            
        }
        else if(arr[low]!=key && arr[high]==key)
        {
         result[1]=high;
            low++;
               
        }
        else{
            result[0]=low;
            result[1]=high;
            break;
        }
    }

    cout << result[0] << "  "<< result[1];    

    return 0;
}