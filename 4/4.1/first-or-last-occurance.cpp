#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, 5, 6, 9, 12, 23, 44, 44, 44, 44, 45, 56};
  int n = arr.size();
  int counter = -1;
  int lb = 0, ub = n - 1;
  int target = 44;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      counter = mid;
      ub = mid - 1;
    } else if (target > arr[mid]) {
      lb = mid + 1;
    } else {
      ub = mid - 1;
    }
  }
  if (counter == -1) {
    cout << "Not found";
  } else {
    cout << "First occurance is " << counter;
  }
  return 0;
}

// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
//
// int main() {
//   vector<int> arr = {1, 2, 3, 5, 6, 9, 12, 23, 44, 44, 44, 44, 45, 56};
//   int n = arr.size();
//   int counter = -1;
//   int lb = 0, ub = n - 1;
//   int target = 44;
//
//   while (lb <= ub) {
//     int mid = lb + (ub - lb) / 2;
//     if (arr[mid] == target) {
//       counter = mid;
//       lb = mid + 1;
//     } else if (target > arr[mid]) {
//       lb = mid + 1;
//     } else {
//       ub = mid - 1;
//     }
//   }
//   if (counter == -1) {
//     cout << "Not found";
//   } else {
//     cout << "Last occurance is " << counter;
//   }
//   return 0;
// }
