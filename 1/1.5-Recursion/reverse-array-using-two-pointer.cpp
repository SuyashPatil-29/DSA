#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int a = 0, b = sizeof(arr) / sizeof(arr[0]) - 1,
      len = sizeof(arr) / sizeof(arr[0]), temp = 0;
  for (int i = 0; i <= len / 2; i++) {
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    temp = 0;
    a++;
    b--;
  }

  cout << "The reversed array is ";
  for (auto it : arr) {
    cout << it << " ";
  }

  return 0;
}
