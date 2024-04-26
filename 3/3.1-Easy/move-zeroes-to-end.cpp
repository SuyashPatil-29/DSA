#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {1, 2, 0, 4, 0, 4, 0, 5};
  int j = 7;
  for (int i = 0; i < 8; i++) {
    if (arr[i] == 0) {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[j] = temp;
      j--;
    }
  }

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
