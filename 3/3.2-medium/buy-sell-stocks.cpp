// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> v = {7, 1, 5, 3, 6, 4};
//   int size = v.size();
//
//   int minIndex = 0;
//   int min = INT_MAX;
//
//   for (int i = 0; i < size; i++) {
//     if (v[i] < min) {
//       min = v[i];
//       minIndex = i;
//     }
//   }
//
//   int maxi = 0;
//
//   for (int i = minIndex+1; i < size; i++) {
//     maxi = max(v[i], maxi);
//   }
//
//   cout << maxi - min;
//   return 0;
// }

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  vector<int> v = {7, 1, 5, 3, 6, 4};
  int size = v.size();

  int diff = 0;
  int mini = INT_MAX;

  for (int i = 0; i < size; i++) {
    mini = min(mini, v[i]);
    diff = max(diff, v[i] - mini);
  }

  cout << diff;

  return 0;
}
