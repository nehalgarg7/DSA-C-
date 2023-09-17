#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    cout << "Enter candidateID \n";

    vector<int> candidateID;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        candidateID.push_back(no);
    }

    cout << "Enter VoterAge: \n";

    vector<int> VoterAge;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        VoterAge.push_back(no);
    }

    int maxCount = -1;
    for (int i = 1; i < n; i++)
    {
        if (candidateID[i] > candidateID[i - 1])
        {
            maxCount = candidateID[i];
        }
        else
        {
            maxCount = candidateID[i - 1];
        }
    }

    vector<int> maxFreq(maxCount, 0);

    for (int i = 0; i < n; i++)
    {
        if (VoterAge[i] >= 18)
        {
            maxFreq[candidateID[i]]++;
        }
    }

    int index = -1;
    for (int i = 1; i < maxCount; i++)
    {
        if (maxFreq[i] > maxFreq[i - 1])
        {
            index = i;
        }
        else
        {
            index = i - 1;
        }
    }

    cout << "Result" << index;
    return 0;
}