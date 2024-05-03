/**
 * 1. values are stored in unordered fashion. Else are same.
 * 
 * 2. Insertion, Deletion and Searching , Avg. T.C. = O(1) using HASHING
 * 
 * Member Functions of unordered_Set
 * 
 * 1. Insertion
 * 
 * insert --- single element -> O(1) avg , O(N) worst (size >= capacity (rehashing))
 *               
 *               multiple element -> O(n) avg , O(n*(NH)) worst (size >= capacity (rehashing)) 
 * {
 *  Here, n is the no.of elements being inserted
 *  N is the size of unordered set.
 * }
 * 
 * 2. Deletion
 * 
 * erase(value) -> O(1) avg , O(N) worst (size >= capacity (rehashing))
 * erase(iterator)
 * erase(start_itr, end_itr)
 * 
 * 3. find()   -> O(1) avg , O(N) worst (size >= capacity (rehashing))
 * 4. count()  -> O(1) avg , O(N) worst (size >= capacity (rehashing))
 * 
 * 5. load_factor() => size of unorderedset (bucket_Count)
 * 6. rehash(x) => sets the number of bucket to x or more. T.C. = O(N) Avg. , O(N^2) Worst.
*/