// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
//
// int findPivot(vector<int> &arr) {
//   int pivot = -1;
//   for (int i = 0; i < arr.size() - 1; i++) {
//     if (arr[i + 1] < arr[i]) {
//       pivot = i;
//     }
//   }
//   return pivot;
// }
//
// int myBinarySearch(vector<int> arr, int lb, int ub, int target) {
//   while (lb <= ub) {
//     int mid = lb + (ub - lb) / 2;
//     if (arr[mid] == target) {
//       if (arr[mid - 1] != target) {
//         return mid;
//       }
//       ub = mid - 1;
//     } else if (target > arr[mid]) {
//       lb = mid + 1;
//     } else {
//       ub = mid - 1;
//     }
//   }
//   return -1;
// }
//
// int findElement(vector<int> &arr, int target) {
//   int ans = -1;
//   int n = arr.size();
//   int lb = 0, ub = n - 1;
//
//   int pivot = findPivot(arr);
//
//   if (arr[pivot] == target)
//     return pivot;
//
//   if (arr[0] <= target)
//     return myBinarySearch(arr, 0, pivot - 1, target);
//   else
//     return myBinarySearch(arr, pivot + 1, n - 1, target);
// }
//
// int main() {
//   vector<int> arr = {7, 8, 1, 2, 2, 2, 3, 3, 3, 3};
//   int target = 3;
//   int ans = findElement(arr, target);
//
//   if (ans == -1) {
//     cout << "Not found";
//   } else {
//     cout << ans;
//   }
//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
  int n = arr.size();
  int lb = 0, ub = n - 1;
  int target = 3;

  while (lb <= ub) {
    int mid = lb + (ub - lb) / 2;
    if (arr[mid] == target) {
      if (arr[mid - 1] != target) {
        cout << mid;
        return 0;
      } else {
        ub = mid - 1;
      }
    } else if (arr[0] > arr[mid]) {
      if (target > arr[mid]) {
        lb = mid + 1;
      } else {
        ub = mid - 1;
      }
    } else {
      if (target < arr[mid] && target >= arr[0]) {
        ub = mid - 1;
      } else {
        lb = mid + 1;
      }
    }
  }
  return 0;
}
