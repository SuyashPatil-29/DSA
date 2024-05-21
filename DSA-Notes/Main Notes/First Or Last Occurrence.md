---
id: First Or Last Occurrence
aliases: []
tags: []
area: Algorithms
project: DSA-Notes
---

#### On 20-05-2024 at 22:09

# The Problem Statement

Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

**Example 1:**
Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
Output: 4
Explanation: As the target value is 13 , it appears for the first time at index number 2.

**Example 2:**
Input: N = 7, target=60, array[] = {3,4,13,13,13,20,40}
Output: -1
Explanation: Target value 60 is not present in the array

# Optimal Approach

Using [[Binary Search Basics]] both first and last occurrence can be found.

**First Occurrence**

A counter variable `counter` can be used to store the local first position and then binary search from `lb to mid-1` can be applied again.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 5, 6, 9, 12, 23, 44, 44, 44, 44, 45, 56};
  int n = arr.size();
  int counter = -1;
  int lb = 0, ub = n - 1;
  int target = 44;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      counter = mid;
      ub = mid - 1;
    } else if (target > arr[mid]) {
      lb = mid + 1;
    } else {
      ub = mid - 1;
    }
  }
  if (counter == -1) {
    cout << "Not found";
  } else {
    cout << "First occurance is " << counter;
  }
  return 0;
}
```

**Last Occurrence**

A counter variable `counter` can be used to store the local last position and then binary search from `mid+1 to ub` can be applied again.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 5, 6, 9, 12, 23, 44, 44, 44, 44, 45, 56};
  int n = arr.size();
  int counter = -1;
  int lb = 0, ub = n - 1;
  int target = 44;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      counter = mid;
      lb = mid + 1;
    } else if (target > arr[mid]) {
      lb = mid + 1;
    } else {
      ub = mid - 1;
    }
  }
  if (counter == -1) {
    cout << "Not found";
  } else {
    cout << "Last occurance is " << counter;
  }
  return 0;
}
```

Time Complexity : O(log n)
Space Complexity : O(1)
