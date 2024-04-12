#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int i = 1; i <= 5; i++) {
    char n = 'A';
    for (int j = i; j <= 5; j++) {
      cout << n++ << " ";
    }
    cout << endl;
  }
  return 0;
}
