#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3, 7, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int maxi = 0;
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum = sum + arr[i];
    if (sum < 0)
      sum = 0;
    maxi = max(sum, maxi);
  }

  cout << maxi;
  return 0;
}
