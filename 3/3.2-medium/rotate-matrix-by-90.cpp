// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
//
// int main() {
//   vector<vector<int>> arr = {
//       {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//   int n = arr.size();
//   vector<vector<int>> res = arr;
//
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < arr[i].size(); j++) {
//       res[j][(n - 1) - i] = arr[i][j];
//     }
//   }
//
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < res[i].size(); j++) {
//       cout << res[i][j] << " ";
//     }
//     cout << endl;
//   }
//
//   return 0;
// }

#include <algorithm>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> arr = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  int n = arr.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < arr[i].size(); j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for (int i = 0; i < n; i++) {
    reverse(arr[i].begin(), arr[i].end());
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < arr[i].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
