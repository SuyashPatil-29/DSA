#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {3, 4, 4, 7, 8, 10};
  int target = 5;
  int n = arr.size();

  int lb = 0;
  int ub = n - 1;

  int ceil = 0;
  int floor = 0;

  while (lb <= ub) {
    int mid = (ub + lb) / 2;
    if (target <= arr[mid]) {
      ub = mid - 1;
      ceil = arr[mid];
    } else {
      lb = mid + 1;
    }
  }

  lb = 0;
  ub = n - 1;

  while (lb <= ub) {
    int mid = (ub + lb) / 2;
    if (target >= arr[mid]) {
      lb = mid + 1;
      floor = arr[mid];
    } else {
      ub = mid - 1;
    }
  }

  cout << floor << " " << ceil;
  return 0;
}
