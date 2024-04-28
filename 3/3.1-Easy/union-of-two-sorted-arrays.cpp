#include <bits/stdc++.h>
#include <set>

using namespace std;

int main() {
  int arr1[] = {1, 1, 2, 3, 4, 5};
  int arr2[] = {2, 3, 4, 4, 5};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int size = size1 + size2;

  int arr3[size];

  for (int i = 0; i < size1; i++) {
    arr3[i] = arr1[i];
    arr3[i + size1] = arr2[i];
  }

  set<int> s;

  for (int i = 0; i < size; i++) {
    s.emplace(arr3[i]);
  }

  for (auto it : s) {
    cout << it << " ";
  }

  return 0;
}
