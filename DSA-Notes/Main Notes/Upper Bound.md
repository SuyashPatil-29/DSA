---
id: Lower bound
aliases: []
tags:
  - DSA
  - Binary-Search
  - AtoZ
area: Algorithms
project: DSA-Notes
---
# Problem Statement

Given an array `vector<int> arr = {1, 2, 3, 3, 7, 8, 8, 10, 10, 11};` and a target `int target = 9` if the element exists in the array or not, return the index of the next largest element. If the search element exceeds `arr[size - 1]` then return the size.

# Optimal Approach

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 3, 7, 8, 8, 10, 10, 11};
  int n = arr.size();
  int target = 9;

  int lb = 0, ub = n - 1;
  int ans = n;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] > target) {
      ans = mid;
      ub = mid - 1;
    } else {
      lb = mid + 1;
    }
  }
  cout << ans;
  return 0;
}
```

> [!NOTE]
> The only thing that is different from [[Lower bound]] is that in lower bound we check for `arr[mid] >= target` but in upper bound we only check for `arr[mid] > target`.

Time Complexity - O(log n)

> [!NOTE]
> This is a new note
