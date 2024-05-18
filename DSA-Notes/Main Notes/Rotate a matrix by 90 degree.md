---
id: Rotate a matrix by 90 degree
aliases:
  - ~/Desktop/DSA/3/3.2-medium/rotate-matrix-by-90.cpp
tags:
  - ArrMed
  - AtoZ
  - DSA
  - excalidraw
area: Algorithms
project: DSA-Notes
---

#### On 18-05-2024 at 20:28

# The Problem Statement

Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

**Input:**

```cpp
[1,2,3]
[4,5,6]
[7,8,9]
```

**Output**:

```cpp
[7,4,1]
[8,5,2]
[9,6,3]
```

**Explanation:** Rotate the matrix simply by 90 degree clockwise and return the matrix.

## Brute Force Approach

Take another dummy matrix of n \* n, and then take the first row of the matrix and put it in the last column of the dummy matrix, take the second row of the matrix, and put it in the second last column of the matrix and so.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int n = arr.size();
  vector<vector<int>> res = arr;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      res[j][(n - 1) - i] = arr[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < res[i].size(); j++) {
      cout << res[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
```

Time complexity = O(n^2)
Space complexity = O(n^2)

## Optimal Approach

**Intuition:** By observation, we see that the first column of the original matrix is the reverse of the first row of the rotated matrix, so that’s why we [transpose the matrix](https://takeuforward.org/data-structure/transpose-a-matrix-program-01-space/) and then reverse each row, and since we are making changes in the matrix itself space complexity gets reduced to O(1).

**Approach:**
Step 1: Transpose the matrix. (transposing means changing columns to rows and rows to columns)

Step 2: Reverse each row of the matrix.

![[Rotate a matrix by 90 degree optimal approach intuition.png]]

**Transposing a matrix**
[[Transpose a matrix.excalidraw]]

```cpp
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  int n = arr.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < arr[i].size(); j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for (int i = 0; i < n; i++) {
    reverse(arr[i].begin(), arr[i].end());
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
```

Time Complexity = O(n^2)
Space Complexity = O(1)
