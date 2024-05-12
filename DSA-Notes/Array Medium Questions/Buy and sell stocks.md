---
id: buy-sell-stocks
aliases:
  - ~/Desktop/DSA/3/3.2-medium/buy-sell-stocks.cpp
tags:
  - DSA
  - AtoZ
  - ArrMed
area: Algorithms
project: DSA-Notes
---

# The Problem Statement

Lets assume we have an array of prizes of stocks where the prize of a stock on `ith` day is equal to the `arr[i]`

```cpp
int arr = {7,1,5,3,6,4};
```

## Brute Force Approach

We could iterate over the array to find the min and store it in a variable with its position in another variable. Then we could use another for loop that runs from the stored position to size-1 and find the maximum variable in that new array. Now we just return the difference between the two (max and min).

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v = {7, 1, 5, 3, 6, 4};
  int size = v.size();

  int minIndex = 0;
  int min = INT_MAX;

  for (int i = 0; i < size; i++) {
    if (v[i] < min) {
      min = v[i];
      minIndex = i;
    }
  }

  int maxi = 0;

  for (int i = minIndex+1; i < size; i++) {
    maxi = max(v[i], maxi);
  }

  cout << maxi - min;
  return 0;
}
```

TC : Around O(2n) at worst
SC : O(1) - no extra space needed

## Optimal Approach

We can linearly traverse the array finding the minimum as we go and store that in the min variable and then have another variable that calculates the difference between the two `arr[i] and the min variable`

Now we just return the difference as out answer.

```cpp
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  vector<int> v = {7, 1, 5, 3, 6, 4};
  int size = v.size();

  int diff = 0;
  int mini = INT_MAX;

  for (int i = 0; i < size; i++) {
    mini = min(mini, v[i]);
    diff = max(diff, v[i] - mini);
  }

  cout << diff;

  return 0;
}

```

TC - O(n)
SC - O(1)
