// List is a template class in STL for implementing Doubly Linked list.

/*
Advantages : -> Implementation become easy.
*/

#include <iostream>
#include <list>
using namespace std;
int main()
{
    // list<datatype> listName;

    list<int> rollno;
    list<int> list1{1, 2, 3, 4};
    list<int> list2 = {5, 6, 7, 8};

    // Iterator Function.
    /*
    1. list.begin() -> iterator for the first element.
    2. list.end() -> iterator for the position after the last element.
    3. list.rbegin()->iterator for the first element in reverse fuction.
    4. list.rend()->iterator for the position after the last element to reverse position.
    5. advance(it,n) -> advances the itr by n places.

    */

    // to have itertaor (2 way)
    /*
    1. list<int> :: iterator it = l1.begin();
    2. auto itr = l1.begin();
    */

    // auto itr = list1.begin();
    // cout<<*itr<<endl;

    // advance(itr,2);
    // cout<<*itr<<endl;

    // using range-based loop
    for (auto num : list1) // create new instance of 1 and name it as num... go for all list inputs.
    {
        cout << num << endl;
    }

    // using iterators

    for (auto itr = list1.rbegin(); itr != list1.rend(); itr++)
    {
        cout << *itr << endl;
    }

    // Inserting elements into a List.

    /*
    ----> list.insert(itr,value) -> insert value before the position of the itr.

    Ex: {1, 2 , 3 , 4}
            itr

    list.insert(itr,5);

    {1, 2, 5, 3, 4}

    ---->list.insert(itr,count,value) -> insert value count number of times before the position of the itr.


    Ex: {1, 2, 3, 4}
               itr
    list.insert(itr,2,5);

    {1, 2, 5, 5, 3, 4}


    ----> list.insert(itr, str_itr,end_itr) -> insert values from str_itr....end_itr-1;

    Ex: {1,        2,       3,       4};
         str_itr          end_itr
    list.insert(str_itr,end_itr);

    {1,2,1,2,3,4}; //including str_itr...but excluding end_itr


    */

    // Deleting elements from a list.

    list1.erase(list1.begin()); // delete the element pointed to by the itr.
    for (auto e : list1)
    {
        cout << e << endl;
    }

    cout<<"Speration"<<endl;



    auto end_itr=list1.begin();
    advance(end_itr,2);

    list1.erase(list1.begin(), end_itr); // delete elements from[str_itr ... end_itr);
    for(auto e : list1)
    {
        cout << e << endl;
    }
    

    /*
    Other member functions of a list container.

    1. push_front(val) -> insert val in the front of list.
    2. pop_front()-> remove val from the front of the list.
    3. push_back(val) -> insert val in the end of the list.
    4. pop_back() -> remove val from the end of the list.
    */
    return 0;
}