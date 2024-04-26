#include <bits/stdc++.h>
#include <ostream>

using namespace std;

int main() {
  for (int i = 1; i <= 5; i++) {
    int n = 1;
    for (int j = i; j <= 5; j++) {
      cout << n;
      n++;
    }
    cout << endl;
  }
  return 0;
}

