#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[6] = {13, 46, 24, 52, 20, 9};
  int ub = 6;

  for (int i = 0; i < ub - 1; i++) {
    int min = i;
    for (int j = i; j <= ub - 1; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
  }

  for (int i = 0; i < ub; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
