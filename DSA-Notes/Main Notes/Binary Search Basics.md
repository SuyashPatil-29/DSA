---
id: Binary Search Basics
aliases:
  - ~/Desktop/DSA/4/4.1/Basic-Binary-Search.cpp
tags:
  - Binary-Search
  - AtoZ
  - DSA
area: Algorithms
project: DSA-Notes
---

#### On 19-05-2024 at 20:59

# Problem statement: 

You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.

Let’s say the given array is = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.

> [!NOTE]
> - Binary search is only applicable in a sorted search space. The sorted search space does not necessarily have to be a sorted array. It can be anything but the search space must be sorted.
> - In binary search, we generally divide the search space into two equal halves and then try to locate which half contains the target. According to that, we shrink the search space size.

## Iterative Solution

We will use a couple of pointers i.e. **low** and **high** to apply binary search. Initially, the low pointer should point to the first index and the high pointer should point to the last index.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {1, 3, 5, 6, 8, 9, 12, 23, 44, 54, 73};
  int n = arr.size();
  int target = 23;

  int lb = 0, ub = n - 1;

  while (ub >= lb) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      cout << mid + 1;
      return 0;
    } else if (target > arr[mid]) {
      lb = mid + 1;
    } else {
      ub = mid - 1;
    }
  }
  cout << "Not found";
  return 0;
}
```

> [!NOTE]
> Mid is found using `int mid = lb + (ub - lb) / 2;` to avoid exceeding the limit of int

## Recursive Solution

Assume, the recursive function will look like this: **binarySearch(arr, lb, ub, target)**. It basically takes 4 parameters i.e. The array, the low pointer, the high pointer and the target. In each recursive call, we will change the value of low and high pointers to trim down the search space. Except for this, the rest of the steps will be the same.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int binSearch(vector<int> &arr, int target, int lb, int ub) {
  int mid = lb + (ub - lb) / 2;
  if (ub >= lb) {
    if (arr[mid] == target) {
      return mid + 1;
    } else if (target > arr[mid]) {
      return binSearch(arr, target, mid + 1, ub);
    } else {
      return binSearch(arr, target, lb, mid - 1);
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1, 3, 5, 6, 8, 9, 12, 23, 44, 54, 73};
  int n = arr.size();
  int target = 23;
  int lb = 0, ub = n - 1;
  cout << binSearch(arr, target, lb, ub);
  return 0;
}
```

Time Complexity: O(log n)