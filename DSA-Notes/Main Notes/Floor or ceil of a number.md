---
id: Floor or ceil of a number
aliases:
  - ~/Desktop/DSA/4/4.1/floor-ceil.cpp
tags:
  - AtoZ
  - Binary-Search
  - DSA
area: Algorithms
project: DSA-Notes
---

#### On 21-05-2024 at 00:37

# The Problem Statement

Problem Statement: You're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x.

**Example 1:**
**Input Format:** n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
**Result:** 4 7
**Explanation:** The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

## Brute Force Approach

The Brute force approach would be to use linear search and locate the element and return element at location+1 and location-1 elements.

## Optimal Approach

The most optimal approach is using [[Binary Search Basics]] concepts applying [[Upper Bound]] to find ceil and modifications to the same to find lower-bound

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {3, 4, 4, 7, 8, 10};
  int target = 5;
  int n = arr.size();

  int lb = 0;
  int ub = n - 1;

  int ceil = 0;
  int floor = 0;

  // To find ceil
  while (lb <= ub) {
    int mid = (ub + lb) / 2;
    if (target <= arr[mid]) {
      ub = mid - 1;
      ceil = arr[mid];
    } else {
      lb = mid + 1;
    }
  }

  lb = 0;
  ub = n - 1;

  // To find floor
  while (lb <= ub) {
    int mid = (ub + lb) / 2;
    if (target >= arr[mid]) {
      lb = mid + 1;
      floor = arr[mid];
    } else {
      ub = mid - 1;
    }
  }

  cout << floor << " " << ceil;
  return 0;
}
```

Time Complexity - O(log n)
Space Complexity - O(1)
