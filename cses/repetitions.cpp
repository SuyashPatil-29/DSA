#include <bits/stdc++.h>
#include <string>

using namespace std;

int repetitions(string str, size_t i, size_t j, int maxrep) {
  if (j >= str.length() - 1) {
    return maxrep;
  }

  if (str[i] == str[j]) {
    return repetitions(str, i, j + 1, maxrep + 1);
  }

  return repetitions(str, j, j + 1, 1);
}

int main() {
  string str;
  cin >> str;
  if (str.length() > 1000000 || str.length() < 1)
    return 0;
  cout << repetitions(str, 0, 1, 1);
  return 0;
}
