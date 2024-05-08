// #include <bits/stdc++.h>
// #include <set>
//
// using namespace std;
//
// int main() {
//   int arr1[] = {1, 1, 2, 3, 4, 5};
//   int arr2[] = {2, 3, 4, 4, 5};
//   int size1 = sizeof(arr1) / sizeof(arr1[0]);
//   int size2 = sizeof(arr2) / sizeof(arr2[0]);
//   int size = size1 + size2;
//
//   int arr3[size];
//
//   for (int i = 0; i < size1; i++) {
//     arr3[i] = arr1[i];
//     arr3[i + size1] = arr2[i];
//   }
//
//   set<int> s;
//
//   for (int i = 0; i < size; i++) {
//     s.emplace(arr3[i]);
//   }
//
//   for (auto it : s) {
//     cout << it << " ";
//   }
//
//   return 0;
// }

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> a = {1, 1, 2, 3, 4, 5};
  vector<int> b = {2, 3, 4, 4, 5, 6};

  int size1 = a.size();
  int size2 = b.size();

  vector<int> c;
  int i = 0, j = 0;

  while (i < size1 && j < size2) {
    if (a[i] <= b[j]) {
      if (c.size() == 0 || c.back() != a[i]) {
        c.emplace_back(a[i]);
      }
    }
    if (a[i] > b[j]) {
      j++;
    }
    i++;
  }

  while (i < size1) {
    if (c.size() == 0 || c.back() != a[i]) {
      c.emplace_back(a[i]);
    }
    i++;
  }

  while (j < size2) {
    if (c.size() == 0 || c.back() != b[j]) {
      c.emplace_back(b[j]);
    }
    j++;
  }

  for (auto it : c) {
    cout << it << " ";
  }
  return 0;
}
