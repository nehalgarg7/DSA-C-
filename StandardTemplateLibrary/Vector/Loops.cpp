#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    //for loop
    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0;i<v.size();i++)
    {
        cout << v[i];
    }

    v.insert(v.begin()+2,6);

    //for each loop {Here we iterate by element not index}
    // Syntax (datatype element_variable_name : variable_name which has to be iterate)
    for(int ele:v)
    {
        cout<<ele<<" ";
    }

    v.erase(v.end()-1);

    //while loop
    int idx=0;
    while(idx<v.size())
    {
        cout<<v[idx]<<endl;
        idx++;
    }

    // if we want to modify element of the vector ---> Using referencing
    
    cout << "Changing the value of vector using referencing\n";
    for(auto &x: v) // values ko as a reference access kr rhe h..
    {
        x = x + 5;
    }

    cout<<"Printing after referencing\n";
    for(auto it : v) // values se access kr rhe h..
    {
        cout << it;
    }
    return 0;
}