/* 
1. Vectors are dynamic array means you can resize the DS when you insert or delete an element.

2. Continugous Memory Allocation.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaration
    /*
    1. vector<datatype> vector_name;
    2. vector<datatype> vector_name(size);
    */
    vector<int> v1(5);

    // size() is used to return the size of the vector
    cout << v1.size() << endl;

    // resize() is used to change the size of the vector
    v1.resize(10);
    cout << v1.size() << endl;

    // capacity() return the capacity of the vector {capacity >= size}
    /*
    size = 1 , capacity = 1
    size = 2 , capacity = 2
    size = 3 , capacity = 4
    size = 4 , capacity = 16 //capacity keep increasing on the power of 2 if we keep adding the element one by one.

    Note: If we resize the vector ...then capacity can be changed by amount depending upon the compiler.
    */
    cout << v1.capacity() << endl;

    // push_back is used to add element at the end.

    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(3);

    // insert (position,element) is used to add element at the given position. // here position is the first element position.

    v1.insert(v1.begin() + 1, 3); // v1.begin() return an bi-directional iterator pointing to the first element of the vector container.Similary v1.end() return an bi-directional iterator pointing to the past-the-end element of the vector container.

    v1.pop_back(); // remove the last element.

    v1.erase(v1.begin()+2); // remove the element at given position.{relative to the first element of the vector}.. 
    //Syntax vector_name.erase(position).

    for(int i=0;i<v1.size();i++)
    {
        cout<<"Position: "<<i<<"Element:"<<v1[i]<<endl;
    }
    return 0;
}