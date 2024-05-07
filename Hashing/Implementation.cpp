/**
 * Implement hash table with closed addressing
 */

#include <bits/stdc++.h>
using namespace std;

class Hashing
{
public:
    vector<list<int>> hashTable;
    int buckets; // size

    Hashing(int size)
    {
        buckets = size;
        hashTable.resize(size);
    }

    int hashvalue(int key)
    {
        return key % buckets;
    }

    void add(int key)
    {
        int idx = hashvalue(key);
        hashTable[idx].push_back(key);
    }

    list<int>::iterator search(int key)
    {
        int idx = hashvalue(key);
        return find(hashTable[idx].begin(), hashTable[idx].end(), key);
    }

    void eraseElement(int key)
    {
        int idx = hashvalue(key);
        auto itr = search(key);
        if (itr != hashTable[idx].end())
        {
            hashTable[idx].erase(itr);
            cout << key << " is deleted" << endl;
        }
        else
        {
            cout << key << " is not present in the hash table" << endl;
        }
    }

    void print()
    {
        for (int i = 0; i < buckets; i++)
        {
            int bucketSize = hashTable[i].size();

            if (bucketSize == 1)
            {
                cout << *hashTable[i].begin();
            }
            else
            {
                for (auto ele : hashTable[i])
                {
                    cout << ele << " -> ";
                }
            }

            cout << endl;
        }
    }
};

int main()
{
    int size;
    cout << "Enter bucket Size: " << endl;
    cin >> size;

    Hashing *h = new Hashing(size);
    cout << "Enter Elements:" << endl;
    int num;

    while(cin >> num)
    {
        h -> add(num);
    }

    h -> print();

    cout << "Element after delete: " <<endl;

    h -> eraseElement(2);

    h -> print();

    cout << "Find key" << endl;

    cout << * h -> search(2);

    return 0;
}