---
id: Search Insert Position
aliases: 
tags:
  - AtoZ
  - DSA
  - Binary-Search
area: Algorithms
project: DSA-Notes
---
# Problem Statement

You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

**Example 1:**
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

**Example 2:**
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.

## Approach or Intuition

The problem can easily be solved by using [[Lower bound]]. If the element needed to insert (target element) is present then return the index else return the next index.

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

Time Complexity : O(log n)