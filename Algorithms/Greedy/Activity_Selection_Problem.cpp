// Activity Selection Problem --> You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
/*
Approach: To solve the problem follow the below idea:

The greedy choice is to always pick the next activity whose finish time is the least among the remaining activities and the start time is more than or equal to the finish time of the previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as the minimum finishing time activity

Follow the given steps to solve the problem:

Sort the activities according to their finishing time
Select the first activity from the sorted array and print it
Do the following for the remaining activities in the sorted array
If the start time of this activity is greater than or equal to the finish time of the previously selected activity then select this activity and print it
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of both array:" << endl;
    cin >> n;

    int start[n], finish[n], index[n];
    // inserting both array values
    cout << "Enter the starting array vales" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> start[i];
        index[i] = i;
    }

    cout << "Enter the finish array vales" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> finish[i];
    }
    // sort the finish time.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (finish[i] > finish[j])
            {
                int temp1 = finish[j];
                finish[i] = finish[j];
                finish[j] = temp1;

                int temp2 = start[j];
                start[i] = start[j];
                start[j] = temp2;

                int temp3 = index[j];
                index[i] = index[j];
                index[j] = temp3;
            }
        }
    }

    int cur_index = 0;
    cout << "Acticity" << index[cur_index] << "has been selected" << endl;

    for (int i = 1; i < n; i++)
    {
        if (finish[cur_index] <= start[i])
        {
            cur_index = i;
            cout << "Acticity" << index[cur_index] << "has been selected" << endl;
        }
    }
    return 0;
}