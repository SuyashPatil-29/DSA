#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int arr[] = {2, 3, 1, 1, 1, 2, 3, 4, 1, 1, 1, 1, 1,
               2, 5, 7, 8, 1, 1, 1, 1, 1, 1, 1, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int max1 = 0;
  int localMax = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 1) {
      localMax++;
      max1 = max(localMax, max1);
    } else {
      localMax = 0;
    }
  }
  cout << max1;
  return 0;
}
