#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target, index = -1;
    cin >> target;

    int temp[100];
    int ans[100][100];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= target)
        {
            index = i;
        }
        else
        {
            break;
        }
    }

    if (index == -1)
    {
        cout << "No possible ans\n";
        return -1;
    }
    else
    {
        for (int i = 0; i <= index; i++)
        {
            for (int j = 0; j <= index; i++)
            {
                if(arr[j])
            }
        }
    }
    return 0;
}

//HARD DFS 
//MEDIUM BACKTRACKING