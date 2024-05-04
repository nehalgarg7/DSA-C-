// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int size, count=0;
    cin >> size;
    
    unordered_map<int, int> leftshoes, rightshoes;
    
    for(int i=0; i<size; i++)
    {
        string value;
        cin >> value;
        
        if(value[1] == 'L')
        {
            leftshoes[int(value[0]) - 48]++;
        }
        else if(value[1] == 'R')
        {
            rightshoes[int(value[0]) - 48]++;
        }
    }
    
    for(auto ele : leftshoes)
    {
        if(rightshoes.find(ele.first) != rightshoes.end())
        {
            int val = min(ele.second, rightshoes[ele.first]);
            count += val;
        }
    }
    
    cout << count;
    return 0;
}