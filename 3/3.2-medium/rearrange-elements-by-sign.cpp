// #include <bits/stdc++.h>
// #include <vector>
//
// using namespace std;
//
// int main() {
//   vector<int> arr = {3, 1, -2, -5, 2, -4};
//   int size = arr.size();
//
//   vector<int> positives;
//   vector<int> negatives;
//
//   for (int i = 0; i < size; i++) {
//     if (arr[i] > 0)
//       positives.emplace_back(arr[i]);
//     else
//       negatives.emplace_back(arr[i]);
//   }
//
//   int pos = 0;
//   int neg = 0;
//
//   for (int i = 0; i < size; i++) {
//     if (i % 2 == 0)
//       arr[i] = positives[pos++];
//     else
//       arr[i] = negatives[neg++];
//   }
//
//   for (auto it : arr) {
//     cout << it << " ";
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> arr = {3, 1, -2, -5, 2, -4};
//   int size = arr.size();
//
//   vector<int> newArr(size, 0);
//   int pos = 0;
//   int neg = 1;
//
//   for (int i = 0; i < size; i++) {
//     if (arr[i] > 0) {
//       newArr[pos] = arr[i];
//       pos += 2;
//     } else {
//       newArr[neg] = arr[i];
//       neg += 2;
//     }
//   }
//
//   for (auto it : newArr) {
//     cout << it << " ";
//   }
//
//   return 0;
// }

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, -4, -5, 3, 6};
  int size = arr.size();
  vector<int> positives;
  vector<int> negatives;

  for (int i = 0; i < size; i++) {
    if (arr[i] > 0)
      positives.emplace_back(arr[i]);
    else
      negatives.emplace_back(arr[i]);
  }

  int pos = 0;
  int neg = 0;
  int minSize = min(positives.size(), negatives.size());
  int newSize = max(positives.size(), negatives.size()) - minSize;

  cout << minSize << "min size" << endl;

  for (int i = 0; i < minSize * 2; i++) {
    if (i % 2 == 0)
      arr[i] = positives[pos++];
    else
      arr[i] = negatives[neg++];
  }

  int j = minSize * 2;
  while (pos < positives.size())
    arr[j++] = positives[pos++];

  while (neg < negatives.size())
    arr[j++] = negatives[neg++];

  for (auto it : arr) {
    cout << it << " ";
  }

  return 0;
}
