#include <bits/stdc++.h>
#include <ostream>

using namespace std;

int hashing(int arr[], int len, int num, int i, int count) {
  cout << "count" << count << endl;
  if (i == len) {
    return count;
  }
  if (arr[i] == num) {
    return hashing(arr, len, num, i + 1, count + 1);
  }
  return hashing(arr, len, num, i + 1, count);
}

int main() {
  int arr[] = {1, 2, 1, 3, 1, 4, 5};
  int len = (sizeof(arr) / sizeof(arr[0]));
  cout << hashing(arr, len, 5, 0, 0);
  return 0;
}
