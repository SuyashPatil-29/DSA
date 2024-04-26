#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  map<int, int> hash;

  for (int i = 0; i < n; i++) {
    hash[arr[i]]++;
  }

  int max = 0;
  int min = arr[0];

  for (auto it : hash) {
    if (it.second > max) {
      max = it.first;
    } else if (it.second < min) {
      min = it.first;
    }
    continue;
  }

  cout << "max :" << max << endl;
  cout << "min :" << min;

  return 0;
}
