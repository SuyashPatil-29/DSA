#include <bits/stdc++.h>
#include <string>

using namespace std;

int repetitions(const string &str) {
  int maxrep = 0;
  int currentrep = 1;
  for (size_t i = 1; i < str.length(); ++i) {
    if (str[i] == str[i - 1]) {
      ++currentrep;
    } else {
      maxrep = max(maxrep, currentrep);
      currentrep = 1;
    }
  }
  return max(maxrep, currentrep);
}

int main() {
  string str;
  cin >> str;
  if (str.length() > 1000000 || str.length() < 1)
    return 0;
  int prevMaxRep = 0;
  cout << repetitions(str);
  return 0;
}
