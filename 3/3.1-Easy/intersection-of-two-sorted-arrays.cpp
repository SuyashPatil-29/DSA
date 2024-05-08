// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// int main() {
//     int a[] = {1, 2, 2, 3, 3, 4, 5, 6};
//     int b[] = {2, 3, 3, 5, 6, 6, 7};
//
//     int s1 = sizeof(a) / sizeof(a[0]);
//     int s2 = sizeof(b) / sizeof(b[0]);
//
//     vector<int> c;
//
//     int i = 0, j = 0;
//
//     while (i < s1 && j < s2) {
//         if (a[i] == b[j]) {
//             if (c.empty() || c.back() != a[i]) {
//                 c.push_back(a[i]);
//             }
//             i++; // Increment i when there's a match
//             j++; // Increment j in each iteration
//         } else if (a[i] < b[j]) {
//             i++; // Increment i if a[i] is less than b[j]
//         } else {
//             j++; // Increment j if b[j] is less than a[i]
//         }
//     }
//
//     for (auto it : c) {
//         cout << it << " ";
//     }
//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
  vector<int> b = {2, 3, 3, 4, 5, 6, 6, 7};

  vector<int> c;
  int i = 0, j = 0;

  while (i < a.size() && j < b.size()) {
    if (a[i] == b[j]) {
      if (c.size() == 0 || c.back() != a[i]) {
        c.emplace_back(a[i]);
      }
      i++;
      j++;
    } else if (a[i] > b[j])
      j++;
    else
      i++;
  }

  for (auto it : c) {
    cout << it << " ";
  }
  return 0;
}
