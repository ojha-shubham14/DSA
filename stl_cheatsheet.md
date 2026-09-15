# C++ STL — Full Function Reference with Syntax

---

## 1. `vector`
```cpp
#include <vector>
vector<int> v;                  // empty vector
vector<int> v(5);               // size 5, all 0
vector<int> v(5, 10);           // size 5, all 10
vector<int> v = {1, 2, 3};      // initializer list

v.push_back(x);                 // add at end
v.pop_back();                   // remove last
v.size();                       // number of elements
v.empty();                      // true if size == 0
v.clear();                      // remove all elements
v.front();                      // first element
v.back();                       // last element
v[i];                           // access (no bounds check)
v.at(i);                        // access (throws if out of range)
v.insert(v.begin() + i, x);     // insert x at index i
v.erase(v.begin() + i);         // erase element at index i
v.erase(v.begin(), v.begin()+3);// erase range
v.resize(n);                    // resize to n
v.resize(n, val);               // resize, fill new with val
v.reserve(n);                   // reserve capacity
v.capacity();                   // current capacity
v.begin(), v.end();             // iterators
v.rbegin(), v.rend();           // reverse iterators
v.swap(v2);                     // swap contents
v.assign(5, 10);                // reassign: 5 elements of value 10
```

---

## 2. `array` (fixed-size, C++11)
```cpp
#include <array>
array<int, 5> a = {1,2,3,4,5};
a.size();
a.fill(0);          // set all elements to 0
a.at(i);
a.front(); a.back();
a.begin(); a.end();
```

---

## 3. `deque`
```cpp
#include <deque>
deque<int> dq;
dq.push_back(x);
dq.push_front(x);
dq.pop_back();
dq.pop_front();
dq.front(); dq.back();
dq[i]; dq.at(i);
dq.size(); dq.empty(); dq.clear();
dq.insert(dq.begin()+i, x);
dq.erase(dq.begin()+i);
```

---

## 4. `list` (doubly linked list)
```cpp
#include <list>
list<int> l;
l.push_back(x); l.push_front(x);
l.pop_back(); l.pop_front();
l.front(); l.back();
l.insert(it, x);
l.erase(it);
l.remove(x);         // remove all occurrences of x
l.sort();             // sort the list
l.reverse();          // reverse the list
l.unique();            // remove consecutive duplicates
l.merge(l2);           // merge two sorted lists
l.size(); l.empty(); l.clear();
```

---

## 5. `stack` (LIFO — adapter)
```cpp
#include <stack>
stack<int> st;
st.push(x);
st.pop();          // removes top (no return)
st.top();          // access top
st.size();
st.empty();
```

---

## 6. `queue` (FIFO — adapter)
```cpp
#include <queue>
queue<int> q;
q.push(x);
q.pop();           // removes front
q.front();
q.back();
q.size();
q.empty();
```

---

## 7. `priority_queue` (heap — adapter)
```cpp
#include <queue>
priority_queue<int> pq;                          // max-heap (default)
priority_queue<int, vector<int>, greater<int>> pq; // min-heap

pq.push(x);
pq.pop();          // removes top (largest/smallest)
pq.top();          // access top
pq.size();
pq.empty();
```

---

## 8. `set` (sorted, unique)
```cpp
#include <set>
set<int> s;
s.insert(x);
s.erase(x);                 // erase by value
s.erase(it);                // erase by iterator
s.find(x);                  // returns iterator, s.end() if not found
s.count(x);                 // 0 or 1
s.size(); s.empty(); s.clear();
s.lower_bound(x);           // first element >= x
s.upper_bound(x);           // first element > x
*s.begin();                 // smallest element
*s.rbegin();                // largest element
```

## `multiset` (sorted, duplicates allowed)
```cpp
#include <set>
multiset<int> ms;
ms.insert(x);
ms.erase(x);              // erases ALL occurrences of x
ms.erase(ms.find(x));     // erase only ONE occurrence
ms.count(x);              // number of occurrences
ms.find(x);
```

---

## 9. `map` (sorted key-value, unique keys)
```cpp
#include <map>
map<int,int> m;
m[key] = value;               // insert/update
m.insert({key, value});
m.erase(key);
m.find(key);                  // iterator, m.end() if not found
m.count(key);                 // 0 or 1
m.size(); m.empty(); m.clear();
for (auto &p : m) { p.first; p.second; }  // iterate sorted by key
m.lower_bound(key);
m.upper_bound(key);
```

## `multimap` (sorted, duplicate keys allowed)
```cpp
#include <map>
multimap<int,int> mm;
mm.insert({key, value});
mm.erase(key);                // erases ALL pairs with this key
mm.count(key);
auto range = mm.equal_range(key);  // all pairs with this key
```

---

## 10. `unordered_set`
```cpp
#include <unordered_set>
unordered_set<int> us;
us.insert(x);
us.erase(x);
us.find(x);
us.count(x);
us.size(); us.empty(); us.clear();
// No lower_bound/upper_bound — not sorted
```

## `unordered_map`
```cpp
#include <unordered_map>
unordered_map<int,int> um;
um[key] = value;
um.insert({key, value});
um.erase(key);
um.find(key);
um.count(key);
um.size(); um.empty(); um.clear();
```

---

## 11. Common Algorithms (`<algorithm>`)
```cpp
sort(v.begin(), v.end());                  // ascending
sort(v.begin(), v.end(), greater<int>());  // descending
reverse(v.begin(), v.end());
max_element(v.begin(), v.end());           // returns iterator
min_element(v.begin(), v.end());
accumulate(v.begin(), v.end(), 0);         // needs <numeric>, sum
count(v.begin(), v.end(), x);              // count occurrences of x
find(v.begin(), v.end(), x);               // returns iterator
binary_search(v.begin(), v.end(), x);      // true/false (must be sorted)
lower_bound(v.begin(), v.end(), x);        // iterator to first >= x
upper_bound(v.begin(), v.end(), x);        // iterator to first > x
unique(v.begin(), v.end());                // removes consecutive dups
next_permutation(v.begin(), v.end());      // next lexicographic permutation
__builtin_popcount(x);                     // count set bits (int)
swap(a, b);
```

---

## Quick Complexity Cheat Sheet

| Container | Insert | Search | Delete |
|---|---|---|---|
| `vector` (end) | O(1)* | O(n) | O(1) (end) |
| `list` | O(1) | O(n) | O(1) |
| `set`/`map` | O(log n) | O(log n) | O(log n) |
| `unordered_set`/`unordered_map` | O(1) avg | O(1) avg | O(1) avg |
| `priority_queue` | O(log n) | O(1) (top) | O(log n) |
| `stack`/`queue` | O(1) | — | O(1) |

*amortized
