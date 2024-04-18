#include <bits/stdc++.h>
#include <utility>

using namespace std;

void revArr(int arr[], int len, int a) {
  if (a >= len / 2) {
    return;
  }
  swap(arr[a], arr[len - a - 1]);
  revArr(arr, len, a + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int len = sizeof(arr) / sizeof(arr[0]);
  revArr(arr, len, 0);
  for (auto it : arr) {
    cout << it << " ";
  }
  return 0;
}
