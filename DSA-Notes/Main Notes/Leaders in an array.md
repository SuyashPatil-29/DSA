---
id: Leaders in an array
aliases: 
tags: 
area: Algorithms
project: DSA-Notes
---
#### On 15-05-2024 at 21:47

# The Problem Statement
Lets assume we have an array `vector<int> arr = {10, 22, 12, 3, 0, 6};` then a leader would be such an element who is bigger than all the elements to it right. 

In this case `{22 12 6}`
## Brute Force Approach
The brute force approach would be to take an element and check if anyone to the right of the element is larger than the element and if no then return the element

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int size = arr.size();
  vector<int> res;
  for (int i = 0; i < size; i++) {
    bool check = false;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] > arr[i]) {
        check = true;
        break;
      }
    }
    if (check == false) {
      res.push_back(arr[i]);
    }
  }

  for (auto it : res) {
    cout << it << " ";
  }
  return 0;
}
```

Time Complexity : O(n^2)
Space Complexity : O(n) in the worst case just to print the result
## Optimal Approach
The Optimal approach is to traverse the array from size-1 keeping the track of local maximum `maxi` and then checking if `arr[i]` is greater than `maxi` or not and if is then storing it in an array `res` .

```cpp
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {

  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int size = arr.size();
  int maxi = INT_MIN;
  vector<int> res;
  for (int i = size - 1; i > 0; i--) {
    if (arr[i] > maxi) {
      res.push_back(arr[i]);
      maxi = arr[i];
    }
  }

  reverse(res.begin(), res.end());

  for (auto it : res) {
    cout << it << " ";
  }

  return 0;
}
```

Time Complexity : O(n)
Space Complexity : O(n) in the worst case just to print the result