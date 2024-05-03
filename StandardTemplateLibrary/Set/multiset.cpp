/**
 * It can store duplicate values. Else remains same.
 *
 * store in ordered manner.
 * 
 * Member functions of multiset:
 * 1.  insert() => T.C. = O(log N)
 * 
 * 2.  erase(val) => T.C. = O(log N)
 *     erase(position)
 *     eraase(strt_pos, end_pos) => T.C. = O(N)
 * 
 * 3. find(): return lowerbound of element searched if found else end iterator.
 *  ex: {1,2,2,2,3,3}
 *         @
 * 
 * ms.find(2) returns first 2 from the left. `@`
 * 
 * 4. count() : no.of occurrences. T.C. = O(k+ log N) {K is the no. of occurrence}
 * 5. lower_bound(): iterator pointing to first occurrence of value if present else position of the next greater value. T.C. = O(log N)
 * 6. upper_bound(): position of next greater value. T.C. = O(log N)
 */

#include <iostream>
#include <set>
using namespace std;
int main()
{

    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(4);
    ms.insert(3);

    for(auto val: ms)
    {
        cout << val << " "; 
    }

    cout << endl;

    return 0;
}