#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 3, 7, 8, 8, 10, 10, 11};
  int n = arr.size();
  int target = 9;

  int lb = 0;
  int ub = n - 1;
  int ans = n;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] > target) {
      ans = mid;
      ub = mid - 1;
    } else {
      lb = mid + 1;
    }
  }
  cout << ans;

  auto ans2 = upper_bound(arr.begin(), arr.end(), target);
  if (ans2 != arr.end()) {
    cout << endl << distance(arr.begin(), ans2);
  }

  return 0;
}
