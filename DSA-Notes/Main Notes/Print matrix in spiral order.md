---
id: Print matrix in spiral order
aliases:
  - ~/Desktop/DSA/3/3.2-medium/spiral-traversal-of-a-matrix.cpp
tags:
  - ArrMed
  - AtoZ
  - DSA
area: Algorithms
project: DSA-Notes
---
#### On 18-05-2024 at 22:37

# The Problem Statement

Given a Matrix, print the given matrix in spiral order.

**Input:**

```cpp
Matrix = {  { 1, 2, 3, 4 },
		    { 5, 6, 7, 8 },
		    { 9, 10,11,12 },
	        { 13,14,15,16 } }
```

**Outhput:**  `1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10`.
**Explanation:** The output of matrix in spiral form.
## Optimal Approach

Printing a matrix in spiral form is the same as peeling an onion layer by layer. Because we are printing the elements layer by layer starting from the outer layers.

![[Spiral Matrix Intuition.png]]

**Steps:**

- Create and initialize variables top as starting row index, bottom as ending row index left as starting column index, and right as ending column index. As shown in the image given below.

![[Spiral Matrix order.png]]

- In each outer loop traversal print the elements of a square in a clockwise manner.
- **Print the top row**, i.e. Print the elements of the top row from column index left to right and increase the count of the top so that it will move to the next row.
- **Print the right column**, i.e. Print the rightmost column from row index top to bottom and decrease the count of right.
- **Print the bottom row**, i.e. if top <= bottom, then print the elements of a bottom row from column right to left and decrease the count of bottom
- **Print the left column**, i.e. if left <= right, then print the elements of the left column from the bottom row to the top row and increase the count of left.
- Run a loop until all the squares of loops are printed.

```cpp
#include <bits/stdc++.h>
#include <ostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int n = arr.size();
  int m = arr[0].size();

  int left = 0, right = m - 1;
  int top = 0, bottom = n - 1;

  vector<int> ans;

  while (top <= bottom && left <= right) {
    for (int i = left; i <= right; i++) {
      ans.push_back(arr[top][i]);
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      ans.push_back(arr[i][right]);
    }
    right--;

    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
        ans.push_back(arr[bottom][i]);

      bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(arr[i][left]);

      left++;
    }
  }

  for (auto it : ans) {
    cout << it << " ";
  }
  cout << endl << right;
  cout << endl << left;
  return 0;
}
```

**Time Complexity: O(m x n)** { Since all the elements are being traversed once and there are total n x m elements ( m elements in each row and total n rows) so the time complexity will be O(n x m)}.

**Space Complexity: O(n)** { Extra Space used for storing traversal in the ans array }.
