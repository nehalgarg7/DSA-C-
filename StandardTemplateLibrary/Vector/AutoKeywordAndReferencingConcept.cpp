#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(4, 5);
    // iterating the for loop using index.
    for (int i = 0; i < 4; i++)
    {
        cout << v[i];
    }

    cout << endl;
    // iterating the for loop using iterators
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it; // De-referencing.
    }

    cout << endl;
    // this is same as above.

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }

    cout << endl;

    // Question : How to iterate through a Vector without using Iterators in C++?

    /*
    The iterator is not the only way to iterate through any STL container. There exists a better and efficient way to iterate through vector without using iterators. It can be iterated using the values stored in any container. Below is the syntax for the same for vectors:

    Syntax: for(auto itr : vector_name)
    Explanation: Here itr is the value stored in vector which is used to traverse vectors.
    */

    // Traversing the vector using values directly.
    for (auto &it : v)
    {
        cout << it;
    }

    cout << endl;

    /*
    Updating values in vector: For updating values in a vector without using iterators traverse the values stored in vector using reference and updated the value. Below is the syntax for the same:

    Syntax: for(auto &itr : vector_name)
    Explanation: Here itr is an address to the value stored in vector which is used to traverse vectors. Below is the program to illustrate the same:
    */

    // Example:

    for (auto &it : v) // for (auto &it : v) means that, on each loop iteration, it is a reference to an element of v.
    {
        it = it + 2;
        cout << it;
    }

    for (auto &it : v)
    {
        cout << it;
    }
    // means on every different iteration, it is an another name for every element of vector.

    /*
    for(auto it : v) Here it, is the value stored in vector which is used to traverse vectors.

    // for (auto it : v)
    {
        it = it + 2 ; // here values get added by 2.
        cout << it; // and also print updated value but this is locally accessible.
    }

    // Here,if we call the loop again then it dosen't print the updated value...jabki purana wala hi value print kr degaa. To print the updated value we have to use referencing.
    */

    // What do you mean by reference to an element??
    /*
    Ans. When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration.

    Also, we can define a reference variable as a type of variable that can act as a reference to another variable. ‘&’ is used for signifying the address of a variable or any memory. Variables associated with reference variables can be accessed either by its name or by the reference variable associated with it.

    Ex :
    int x = 10;

    // ref is a reference to x.
    int& ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << '\n';

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << '\n';
    */

    /*
    Advantages:

    1. Simple and easy to write code.
    2. Better and efficient than using iterators method.

    Disadvantages:

    1. It iterates only in forward direction.
    2. Keeps no counter i.e., We cannot find the index of any element with this traversal. For counting the element, the counter have to taken explicitly.
    */

    // Application of Reference in C++
    /*
    Applications of Reference in C++ -->

    1. Modify the passed parameters in a function
    2. Avoiding a copy of large structures
    3. In For Each Loop to modify all objects
    4. For Each Loop to avoid the copy of objects*/

    // 4. For Each Loop to avoid the copy of objects
    // Declaring vector
    vector<string> vect{"geeksforgeeks practice",
                        "geeksforgeeks write",
                        "geeksforgeeks ide"};

    // We avoid copy of the whole string object by using reference.
    for (const auto &x : vect)
    {
        cout << x << '\n';
    }
    return 0;
}