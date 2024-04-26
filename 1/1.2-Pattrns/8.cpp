
#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * 5 - 1 - 2 * i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}

// 2n - 1 - 2i = 9
//
// 0 => 9 => 9
// 1 => 7 => 7
// 2 => 5 =>
// 3 => 3
// 4 => 1
