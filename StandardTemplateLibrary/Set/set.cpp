/*
1. Set is an STL Container used to store unique values.
2. Values are stored in ordered state. (increasing order/decreasing order)
3. No indexing, elements are identified by their own values.
4. Once value is inserted in a set, it cannot be modified.

Advantages of Set
1. Unique values
2. Ordered (sorted) {By default in increasing order. }
3. Dynamic Size, no overflowing errors.
4. Faster (Insertion, Deletion and Search {BST(Red-Black Tree)}) T.C. = O(log N)

Disadvantages of Set
1. Cannot access elements using indexing.
2. More memory than array.
3. Not suitable for large datasets. (insertion, deletion) - T.C = O(log N)
*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
    // Declaration of Set
    // Set <data_type> set_name;
    // Set <data_type, greater<data_type>>set_Name; (For decreasing order)

    // Insertion ---- SetName.insert(value); -> returns an iterator to the inserted value.

    set<int> set1;

    set1.insert(2);
    set1.insert(4);
    set1.insert(3);

    cout << set1.size() << endl;

    set1.insert(2);

    cout << set1.size() << endl; // size remains same due to Unique value property.

    // TRAVERSING A SET

    // Iterator

    /**
     * 1. setname.begin() - iterator pointing to the first element of my set.
     * 2. setnmae.end() - iterator poinitng to the position after the last element of set.
     */

    set<int>::iterator itr;

    // for(itr = set1.begin(); itr!= set1.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }

    for (auto value : set1)
    {
        cout << value << " ";
    }

    cout << endl;

    // Deleting elements from a Set

    /**
     * 1. Set_Name.erase(value) T.C. = O(log N)
     * 2. Set_Name.erase(position) T.C. = O(log N)
     * 3. Set_Name.erase(start_pos, end_pos) // Delete from start pos to element before last element. T.C. = O(N) ; N is the range.
     *
     *
     */

    /**
     * set1.erase(4);

    for (auto value:set1){
        cout << value << " ";
    }
    */

    /*
    
    // auto itr2 = set1.begin();
    // advance(itr2, 1);

    // set1.erase(itr2);
    
    */


    auto strt_itr = set1.begin();
    // auto end_itr = set1.begin();
    // advance (end_itr , 2);

    auto end_itr = set1.end();
    end_itr--;

    set1.erase(strt_itr, end_itr);

    for (auto value : set1)
    {
        cout << value << " ";
    }

    return 0;
}