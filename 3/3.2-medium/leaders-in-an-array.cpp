// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
//
// int main() {
//   vector<int> arr = {10, 22, 12, 3, 0, 6};
//   int size = arr.size();
//   vector<int> res;
//   for (int i = 0; i < size; i++) {
//     bool check = false;
//     for (int j = i + 1; j < size; j++) {
//       if (arr[j] > arr[i]) {
//         check = true;
//         break;
//       }
//     }
//     if (check == false) {
//       res.push_back(arr[i]);
//     }
//   }
//
//   for (auto it : res) {
//     cout << it << " ";
//   }
//   return 0;
// }

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {

  vector<int> arr = {10, 22, 12, 3, 0, 6};
  int size = arr.size();
  int maxi = INT_MIN;
  vector<int> res;
  for (int i = size - 1; i > 0; i--) {
    if (arr[i] > maxi) {
      res.push_back(arr[i]);
      maxi = arr[i];
    }
  }

  reverse(res.begin(), res.end());

  for (auto it : res) {
    cout << it << " ";
  }

  return 0;
}
