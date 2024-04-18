#include <bits/stdc++.h>

using namespace std;

void print(int i, int n) {
  if (i < 1)
    return;
  print(i - 1, n);
  cout << i << " ";
}

int main() {
  print(10, 10);
  return 0;
}
