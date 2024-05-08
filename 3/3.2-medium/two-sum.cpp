// #include <bits/stdc++.h>
// #include <iostream>
//
// using namespace std;
//
// int main() {
//   int arr[] = {2, 6, 5, 8, 11};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int sum = 15;
//
//   for (int i = 0; i < size; i++) {
//     for (int j = i + 1; j < size; j++) {
//       if (arr[i] + arr[j] == sum) {
//         cout << "{ " << i << " , " << j << " }";
//         return 0;
//       }
//     }
//   }
//   cout << "Not found";
//   return 0;
// }

// #include <bits/stdc++.h>
// #include <map>
//
// using namespace std;
//
// int main() {
//   int arr[] = {2, 6, 5, 8, 11};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   int sum = 14;
//
//   map<int, int> mpp;
//
//   for (int i = 0; i < size; i++) {
//     int toFind = sum - arr[i];
//     if (mpp.find(toFind) != mpp.end()) {
//       cout << "Yes";
//       return 0;
//     } else {
//       mpp.emplace(arr[i], i);
//     }
//   }
//   cout << "No";
//   return 0;
// }

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[] = {2, 6, 5, 8, 11};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 14;

  int i = 0, j = size - 1;

  sort(arr, arr + size);

  for (int k = 0; i < j; k++) {
    if (arr[i] + arr[j] < sum) {
      i++;
    } else if (arr[i] + arr[j] > sum) {
      j--;
    } else {
      cout << "Found";
      return 0;
    }
  }
  cout << "Not found";
  return 0;
}
