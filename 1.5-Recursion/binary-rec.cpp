#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int lb, int ub, int num) {
  if (ub >= lb) {
    int mid = lb + (ub - lb) / 2;

    if (arr[mid] == num)
      return mid + 1;

    if (arr[mid] > num)
      return binarySearch(arr, lb, mid - 1, num);

    return binarySearch(arr, mid + 1, ub, num);
  }

  return -1;
}

int main() {
  int arr[] = {1, 2, 4, 7, 9, 10, 12};
  int num = 2;
  int ub = (sizeof arr / sizeof arr[0]);
  int lb = 0;
  int res = binarySearch(arr, lb, ub - 1, num);
  res != -1 ? cout << "The position is : " << res
            : cout << "Element is not present in the array";
  return 0;
}
