#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int t;
  cin >> t;

  while (t-- % 7) {
    int temp = arr[0];
    for (int i = 0; i < 6; i++) {
      arr[i] = arr[i + 1];
    }
    arr[6] = temp;
  }

  for (int i = 0; i < 7; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
