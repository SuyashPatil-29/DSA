---
id: Kandane's Algorithm
aliases:
  - /home/suyash/Desktop/DSA/3/3.2-medium/kandanes-algorithm.cpp
tags:
  - DSA
  - AtoZ
  - ArrMed
area: Algorithms
project: DSA-Notes
---
int arr = {-2 , -3 , 3 , -1 , -2 , 1 , 5 , 3};

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3, 7, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxi = 0;
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
    if (sum < 0)
      sum = 0;
    maxi = max(sum, maxi);
  }

  cout << maxi;
  return 0;
}
```

TC - O(n)
SC - O(1)

# Now to print the sub array

We can see that a sub array always starts when the sum is zero so lets take two variables

```
int start = 0;
int end = 0;
```

if the sum is zero we set the start to i + 1 and when maxi is greater than sum we equate end to i + 1

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxi = 0;
  int sum = 0;
  int start = 0;
  int end = 0;

  for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
    if (sum < 0) {
      sum = 0;
    }
    if (sum == 0) {
      start = i + 1;
    }
    if (sum > maxi) {
      maxi = sum;
      end = i + 1;
    }
  }

  for (int i = start; i < end; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  cout << maxi;
  return 0;
}
