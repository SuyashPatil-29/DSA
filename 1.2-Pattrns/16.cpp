#include <bits/stdc++.h>

using namespace std;

char n = 'A';
int main() {
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      cout << n << " ";
    }
    n++;
    cout << endl;
  }
  return 0;
}

