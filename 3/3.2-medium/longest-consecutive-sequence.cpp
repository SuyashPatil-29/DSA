//
// #include <bits/stdc++.h>
// using namespace std;
//
// bool linearSearch(vector<int>&a, int num) {
//     int n = a.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (a[i] == num)
//             return true;
//     }
//     return false;
// }
// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size(); //size of array
//     int longest = 1;
//     //pick a element and search for its
//     //consecutive numbers:
//     for (int i = 0; i < n; i++) {
//         int x = a[i];
//         int cnt = 1;
//         //search for consecutive numbers
//         //using linear search:
//         while (linearSearch(a, x + 1) == true) {
//             x += 1;
//             cnt += 1;
//         }
//
//         longest = max(longest, cnt);
//     }
//     return longest;
// }
//
// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }

#include <algorithm>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main() {
  vector<int> arr = {100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2, 5};
  int n = arr.size();
  sort(arr.begin(), arr.end());

  int mini = arr[0];
  int res = 1;
  int count = 1;

  for (int i = 0; i < n; i++) {
    if (arr[i] == mini + count) {
      count++;
    } else if (arr[i] == arr[i - 1]) {
      continue;
    } else {
      res = max(count, res);
      count = 1;
      mini = arr[i];
    }
  }

  cout << res;
  return 0;
}
