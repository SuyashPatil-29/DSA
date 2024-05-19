#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
  int n = arr.size();
  int k = 3;
  int count = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum = sum + arr[j];
      if (sum == k)
        count++;
      else
        continue;
    }
  }

  cout << count;
  return 0;
}
