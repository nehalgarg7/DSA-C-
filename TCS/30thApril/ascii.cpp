#include <bits/stdc++.h>
using namespace std;

class student
{
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

    int totalGrades = 0, totalGradesCount = 0;

    student obj[n];

    for (int i = 0; i < n; i++)
    {
        student obj[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (obj[i].age > 20)
        {
            cout << obj[i].name << " ";
        }

        if (obj[i].gender == "Female")
        {
            totalGrades = totalGrades + int(obj[i].grade);
            totalGradesCount++;
        }
    }

    cout << totalGrades / totalGradesCount;
    return 0;
}