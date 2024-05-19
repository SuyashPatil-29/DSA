---
id: Lower bound
aliases: 
tags:
  - DSA
  - Binary-Search
  - AtoZ
area: Algorithms
project: DSA-Notes
---
# Problem Statement

Given an array `vector<int> arr = {1, 2, 3, 3, 7, 8, 8, 10, 10, 11};` and a target `int target = 9` if the element exists in the array then return the position and if not then return the position of the next element. If the target exceeds `arr[size-1]` then return `size`

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
    if (arr[mid] >= target) {
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

Time Complexity - O(log n)