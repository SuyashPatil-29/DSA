---
id: Sort an array of 0's 1's and 2's
aliases: []
tags: []
area: Algorithms
project: DSA-Notes
---
#### On 14-05-2024 at 09:16

# The Problem Statement

Given an array of 0's 1's and 2's ```int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};```  Use the dutch national flag algorithm to sort them in order.

## Dutch national flag algorithm.
### Intuition 

Lets consider the given array as a subset of an already sorted array as [[Sort an array.excalidraw]].

```cpp
#include <bits/stdc++.h>

// The dutch national flag algo

using namespace std;
int main() {

  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  int low = 0, high = size - 1;
  int mid = 0;

  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
```
