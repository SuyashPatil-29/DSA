#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 3, 4};
  int n = 5;

  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[j] != arr[i]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }

  cout << "Unique elements : " << i + 1;

  return 0;
}
