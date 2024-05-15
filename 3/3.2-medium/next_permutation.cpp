#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <utility>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
  int size = arr.size();
  int ind = -1;

  for (int i = size - 2; i > 0; i--) {
    if (arr[i] < arr[i + 1]) {
      ind = i;
      break;
    }
  }

  if (ind == -1) {
    reverse(arr.begin(), arr.end());
  }

  for (int i = size - 1; i > ind; i--) {
    if (arr[i] > arr[ind]) {
      swap(arr[i], arr[ind]);
      break;
    }
  }

  reverse(arr.begin() + ind + 1, arr.end());

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
