#include <bits/stdc++.h>

using namespace std;

int main() {

  int start;

  for (int i = 1; i <= 5; i++) {
    i % 2 != 0 ? start = 1 : start = 0;
    for (int j = 1; j <= i; j++) {
      cout << start;
      start = 1-start;
    }
    cout << endl;
  }
  return 0;
}
