#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int i = 1; i <= 5; i++) {
    char n = 'A';
    for (int j = 1; j <= i; j++) {
      cout << n++ << " ";
    }
    cout << endl;
  }
  return 0;
}
