#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[6] = {13, 46, 24, 52, 20, 9};
  int len = 6;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
