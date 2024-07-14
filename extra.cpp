/*The commented libraries are part of the GNU C++ library and are used for implementing policy-based data structures. Here are some functions and their usage:

1. `#include<ext/pb_ds/assoc_container.hpp>`: This header file is used to include the associative containers or group of templates such as set, multimap, map etc. The tree-based data structures which we will be using below is present in this header file¹².

2. `#include<ext/pb_ds/tree_policy.hpp>`: This header file is used to include the `tree_order_statistics_node_update` which contains various operations for updating the node variants of a tree-based container, so we can keep track of metadata like the number of nodes in a subtree¹².

3. `using namespace __gnu_pbds;`: This is a namespace necessary for the GNU based Policy based data structures¹².

Here are some functions provided by these libraries:

- `find_by_order(k)`: Returns an iterator to the kth element (counting from zero) in the set in O(logn) time. For example, if we have a set s: {1, 5, 6, 17, 88}, then `*s.find_by_order(2)` would return the 3rd element in the set i.e. 6¹².

- `order_of_key(k)`: Returns the number of items that are strictly smaller than our item k in O(logn) time. For example, if we have a set s: {1, 5, 6, 17, 88}, then `s.order_of_key(6)` would return the count of elements strictly smaller than 6 i.e. 2¹².

These libraries are often used in competitive programming where time complexity is a crucial factor. However, they are not part of the standard C++ library and may not be portable across different compilers².

Source: Conversation with Bing, 3/12/2023
(1) Ordered Set and GNU C++ PBDS - GeeksforGeeks. https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/.
(2) Policy based data structures in g++ - GeeksforGeeks. https://www.geeksforgeeks.org/policy-based-data-structures-g/.
(3) Using - GCC, the GNU Compiler Collection. https://gcc.gnu.org/onlinedocs/libstdc++/manual/policy_data_structures_using.html.
(4) Ordered Set and GNU C++ PBDS - GeeksforGeeks. https://www.geeksforgeeks.org/?p=196860.
(5) C++ STL: Policy based data structures - Codeforces. https://codeforces.com/blog/entry/11080.
(6) undefined. https://goo.gl/WVDL6g.
*/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
    pbds arr; // Creates an empty ordered set

    // Insert elements
    arr.insert(1);
    arr.insert(5);
    arr.insert(6);
    arr.insert(17);
    arr.insert(88);

    // Find the third element
    auto it = arr.find_by_order(2);
    cout << "The third element is: " << *it << endl;

    // Find the number of elements strictly smaller than 6
    int num = arr.order_of_key(6);
    cout << "The number of elements strictly smaller than 6 is: " << num << endl;

    return 0;
}
