/**
 * Input: ABC,22,C,MALE   vector<string> nums;
 *        XYZ 23 D FEMALE 
 *        PQR 24 A MALE 
*/

#include <bits/stdc++.h>
using namespace std;

class student{

    public: 

    string name;
    int age;
    char grade;
    string gender;

    student()
    {
        cin >> name;
        cin >> age;
        cin >> grade;
        cin >> gender;
    }

};

int main()
{
    int n;
    cin >> n;

    student obj[n];

    for(int i=0; i<n; i++)
    {
        student obj[i]; //obj[0] , obj[1], obj[2]
    }

    cout << obj[0].name;
    return 0;
}