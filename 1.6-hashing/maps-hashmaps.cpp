#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  // map <key , value> => key is number and value is frequency.
  map<int, int> mpp;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }

  int t;
  cin >> t;

  while (t--) {
    int num;
    cin >> num;
    if (num < n)
      cout << num << " is present " << mpp[num] << " times." << endl;
    else
      cout << "Element not found";
  }
  return 0;
}
