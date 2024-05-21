#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {2, 3, 4, 8, 9, 9, 9, 9, 10, 23, 34, 34, 34, 34, 34, 60};
  int target = 34;
  int counter = 0;
  int n = arr.size();
  int lb = 0, ub = n - 1;
  int minIndex = 0, maxIndex = 0;

  // Find min index
  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      ub = mid - 1;
      minIndex = mid;
    } else if (arr[mid] < target) {
      lb = mid + 1;
    } else {
      ub = mid - 1;
    }
  }

  lb = 0, ub = n - 1;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] <= target) {
      lb = mid + 1;
      maxIndex = mid;
    } else {
      ub = mid - 1;
    }
  }

  counter = maxIndex - minIndex + 1;

  cout << "The difference is " << counter;

  return 0;
}
