#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Fruit{
    public:
    string name;
    string color;
};


int main()
{

    // Creating and Declaring an Object
    Fruit apple; //object
    apple.name = "Apple";
    apple.color = "Red";

    cout << apple.name << apple.color << endl;

    // Another way to create and declare an object. Using new Keyword
    /*
    when we create a object using new keyword it return a pointer, pointing to that object of that class.

    here we use Arrow(->) operator to access the data of the object.
    */
    Fruit *mango = new Fruit();
    mango -> name = "Mango";
    mango -> color = "Yellow";

    cout << mango->name << mango->color << endl;

    return 0;
}