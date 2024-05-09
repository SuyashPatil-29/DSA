#include <bits/stdc++.h>

// The dutch national flag algo

using namespace std;
int main() {

  int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  int low = 0, high = size - 1;
  int mid = 0;

  while (mid <= high) {
    if (arr[mid] == 0) {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else {
      swap(arr[mid], arr[high]);
      high--;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
