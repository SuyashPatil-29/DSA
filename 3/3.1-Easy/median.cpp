#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  vector<int> a = {1, 3};
  vector<int> b = {2};

  vector<int> c;
  int i = 0;
  int j = 0;

  while (i < a.size() && j < b.size()) {
    if (a[i] <= b[j]) {
      c.emplace_back(a[i]);
      i++;
    }
    if (a[i] > b[j]) {
      c.emplace_back(b[j]);
      j++;
    }
  }
  while (i < a.size()) {
    c.emplace_back(a[i]);
    i++;
  }
  while (j < b.size()) {
    c.emplace_back(b[j]);
    j++;
  }

  cout << c[(c.size() - 1) / 2] << endl;

  return 0;
}
