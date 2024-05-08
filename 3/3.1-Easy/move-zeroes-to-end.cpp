#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[7] = {1, 2, 3, 4, 0, 5, 0};
  int i = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  int j = size - 1;

  for (int k = 0; i < j; i++) {
    if (arr[j] == 0) {
      j--;
    }
    if (arr[i] == 0) {
      swap(arr[i], arr[j]);
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

