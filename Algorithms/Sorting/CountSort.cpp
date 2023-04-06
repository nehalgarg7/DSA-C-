// Count sort.. practice in array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array:"<<endl;
    cin >> n;

    // Declaring an array of size n.
    int arr[n];
    cout << "Enter the elements of the array:"<<endl;

    // Inserting elements into array.
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    // Declaring and assigning the variable temp.
    int temp = -9999;

    // Finding out the largest element present in the array and storing it in the variale temp.
    for(int i=0;i<n;i++)
    {
        if(temp <= arr[i])
        {
            temp = arr[i];
        }
    }

    cout << temp;

    // declaring a frequency array of size [temp+1]. And intially assigning it to zero.
    // The purpose is to count the frequency of each unique element and stores its frequency on the frequency array of index, number itself.
    int freq [temp+1] = {0};

    for (int i=0;i<n;i++)
    {
        freq [arr[i]] = freq[arr[i]] + 1;
        
    }

    cout << "freq array" <<endl;

    for(int i=0 ;i <=temp; i++)
    {
        cout << freq[i];
    }

    cout << "Started storing \n";
    // Iterating the loop and printing the value untill the value of the particular index not become zero.
    for(int i=0;i<=temp;i++)
    {
        while(freq[i]!=0)
        {
            cout << i << " ";
            freq[i]--;
        }
    }
    return 0;
}