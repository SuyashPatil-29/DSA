#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  long long count = 0;
  long long arr[n];
  for (long long i = 0; i < n; i++) {
    cin >> arr[i];
    if (i > 0 && arr[i] < arr[i - 1]) {
      count += arr[i - 1] - arr[i];
      arr[i] = arr[i - 1]; // Make the current element at least as large as the
                           // previous one
    }
  }
  cout << count;
  return 0;
}

