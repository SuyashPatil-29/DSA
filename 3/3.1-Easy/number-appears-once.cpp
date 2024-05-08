#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {1, 1, 2, 3, 3, 4, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans = arr[i] ^ ans;
  }
  cout << ans;
  return 0;
}
