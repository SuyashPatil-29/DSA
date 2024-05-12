---
id: Element that appears more than size by 2
aliases:
  - ~/Desktop/DSA/3/3.2-medium/appears-n-by-two-times.cpp
tags:
  - ArrMed
  - AtoZ
  - DSA
area: Algorithms
project: DSA-Notes
---
let arr = {2,2,2,3,4,2,1,2,1,1,1,2,3};

```
#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {2, 2, 3, 3, 1, 2, 2, 3, 3, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int counter = 0;
  int store = arr[0];

  for (int i = 0; i < size; i++) {
    if (arr[i] == store) {
      counter++;
    }
    if (counter == 0) {
      store = arr[i];
      counter++;
    }
    if (arr[i] != store && counter != 0) {
      counter--;
    }
  }

  if (counter > 0) {
    cout << store;
  }

  return 0;
}

```
