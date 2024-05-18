---
id: Longest consecutive sequence
aliases: 
tags:
  - ArrMed
  - AtoZ
  - DSA
area: Algorithms
project: DSA-Notes
---
#### On 16-05-2024 at 19:07

# The Problem Statement
You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.

Example : 
**Input:** `[100, 200, 1, 3, 2, 4]`

**Output:** 4

**Explanation:** The longest consecutive subsequence is 1, 2, 3, and 4.
## Brute Force Approach 

A straightforward but basic solution is to examine consecutive sequences for each element in the given array. For every element x, we will try to find the consecutive elements, x+1, x+2, x+3, and so on using the [linear search algorithm](https://takeuforward.org/data-structure/linear-search-in-c/). Thus, we will check the length of the longest consecutive subsequence we can build for every element x. Among all the lengths we will consider the maximum one.

```cpp

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); //size of array
    int longest = 1;
    //pick a element and search for its
    //consecutive numbers:
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
```

Time Complexity : O(n^2)
Space Complexity :  O(1)
## Better Approach

A better approach would be to sort the array and keep count of maximum consecutive elements by going linearly through the array

```cpp
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  vector<int> arr = {100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2, 5};
  int n = arr.size();
  sort(arr.begin(), arr.end());

  int mini = arr[0];
  int res = 1;
  int count = 1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == mini + count) {
      count++;
    } else if (arr[i] == arr[i - 1]) {
      continue;
    } else {
      res = max(count, res);
      count = 1;
      mini = arr[i];
    }
  }

  cout << res;
  return 0;
}
```

Time complexity : O(n log n + n)
Space complexity : O(1)
## Optimal Approach

