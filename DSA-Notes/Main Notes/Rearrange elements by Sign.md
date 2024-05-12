---
id: Rearrange elements by Sign
aliases:
  - ~/Desktop/DSA/3/3.2-medium/rearrange-elements-by-size.cpp
tags:
  - DSA
  - ArrMed
  - AtoZ
area: Algorithms
project: DSA-Notes
---

#### On 12-05-2024 at 22:34

# The Problem Statement - Verity 1

Lets assume we have an array `arr = {3, 1, -2, -5, 2, -4};` and we want to rearrange it in such a way that the sign of the elements is alternating.

Resultant array should be `arr = {3, -2, 1, -5, 2, -4};`

### Constraints for variety 1

> The number of elements in the array should be even.
> The number of positive and negative elements should be equal.

## Brute Force Approach

The obvious solution that comes to mind is to create two new arrays one with positive elements and another with negative elements. Lets call them `positives` and `negatives` respectively. We then merge them and return the resultant array.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {3, 1, -2, -5, 2, -4};
  int size = arr.size();

  vector<int> positives;
  vector<int> negatives;

  for (int i = 0; i < size; i++) {
    if (arr[i] > 0)
      positives.emplace_back(arr[i]);
    else
      negatives.emplace_back(arr[i]);
  }

  int pos = 0;
  int neg = 0;

  for (int i = 0; i < size; i++) {
    if (i % 2 == 0)
      arr[i] = positives[pos++];
    else
      arr[i] = negatives[neg++];
  }

  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}
```

Time Complexity - O(2n)
Space Complexity - O(n)

## Optimal Approach

The Optimal approach would be to reduce the extra for loop thats required to rearrange the array. This reduces the time complexity to `O(n)`. We would still need the extra new array thus still using an extra `O(n)` space complexity

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {3, 1, -2, -5, 2, -4};
  int size = arr.size();

  vector<int> newArr(size, 0);
  int pos = 0;
  int neg = 1;

  for (int i = 0; i < size; i++) {
    if (arr[i] > 0) {
      newArr[pos] = arr[i];
      pos += 2;
    } else {
      newArr[neg] = arr[i];
      neg += 2;
    }
  }

  for (auto it : newArr) {
    cout << it << " ";
  }

  return 0;
}
```

Time Complexity - O(n)
Space Complexity - O(n)

# The Problem Statement - Verity 2

This varity of problem is similar to the above one but the difference is that if there are more elements than positive and negative elements then we need to rearrange them in such a way that the new elements are arranged at the end without changing the order

Let's assume we have an array `arr = {1, 2, -4, -5, 3, 6};` where we have more positive and elements(4) negative elements(2) then our resultant array should look something like `arr = {1, -4, 2, -5, 3, 6}`

### Constraints for variety 2

> The number of elements in the array can or can not be even.
> The number of positive and negative elements can or can not be equal.

## Brute Force Approach which is the optimal one

We can create two new arrays `positives` and `negatives` and find the min size of these two arrays. By finding the min of the two arrays we are sure how many elements will be in the proper order that is `pos,neg,pos...`. We can then iterate over the remaining bigger array and print it in the same order.

```cpp
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, -4, -5, 3, 6};
  int size = arr.size();
  vector<int> positives;
  vector<int> negatives;

  for (int i = 0; i < size; i++) {
    if (arr[i] > 0)
      positives.emplace_back(arr[i]);
    else
      negatives.emplace_back(arr[i]);
  }

  int pos = 0;
  int neg = 0;
  int minSize = min(positives.size(), negatives.size());
  int newSize = max(positives.size(), negatives.size()) - minSize;

  cout << minSize << "min size" << endl;

  for (int i = 0; i < minSize * 2; i++) {
    if (i % 2 == 0)
      arr[i] = positives[pos++];
    else
      arr[i] = negatives[neg++];
  }

  int j = minSize * 2;
  while (pos < positives.size())
    arr[j++] = positives[pos++];

  while (neg < negatives.size())
    arr[j++] = negatives[neg++];

  for (auto it : arr) {
    cout << it << " ";
  }

  return 0;
}
```

Time Complexity - O(2n)
Space Complexity - O(n)
