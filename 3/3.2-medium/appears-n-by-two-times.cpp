// #include <bits/stdc++.h>
// #include <unordered_map>
//
// using namespace std;
//
// int main() {
//   int arr[] = {2, 2, 3, 3, 1, 2, 2};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   unordered_map<int, int> mpp;
//
//   for (int i = 0; i < size; i++) {
//     mpp[arr[i]]++;
//   }
//   for (auto it = mpp.begin(); it != mpp.end(); it++) {
//     if (it->second > size / 2) {
//       cout << it->first;
//       return 0;
//     }
//   }
//
//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {2, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3};
  int size = sizeof(arr) / sizeof(arr[0]);

  int counter = 0;
  int store = arr[0];

  for (int i = 0; i < size; i++) {
    if (arr[i] == store) {
      counter++;
    } else if (arr[i] != store && counter != 0) {
      counter--;
    } else {
      store = arr[i];
      counter++;
    }
  }

  if (counter > 0) {
    cout << store;
  } else {
    cout << -1;
  }

  return 0;
}
