// // Iterative Code
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> arr = {1, 3, 5, 6, 8, 9, 12, 23, 44, 54, 73};
//   int n = arr.size();
//   int target = 23;
//
//   int lb = 0, ub = n - 1;
//
//   while (ub >= lb) {
//     int mid = lb + (ub - lb) / 2;
//     if (arr[mid] == target) {
//       cout << mid + 1;
//       return 0;
//     } else if (target > arr[mid]) {
//       lb = mid + 1;
//     } else {
//       ub = mid - 1;
//     }
//   }
//   cout << "Not found";
//   return 0;
// }

// Recursive code
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int binSearch(vector<int> &arr, int target, int lb, int ub) {
  int mid = lb + (ub - lb) / 2;
  if (ub >= lb) {
    if (arr[mid] == target) {
      return mid + 1;
    } else if (target > arr[mid]) {
      return binSearch(arr, target, mid + 1, ub);
    } else {
      return binSearch(arr, target, lb, mid - 1);
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {1, 3, 5, 6, 8, 9, 12, 23, 44, 54, 73};
  int n = arr.size();
  int target = 23;
  int lb = 0, ub = n - 1;
  cout << binSearch(arr, target, lb, ub);
  return 0;
}
