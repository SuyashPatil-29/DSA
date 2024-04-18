#include <bits/stdc++.h>

using namespace std;

void revBack(int i, int n) {
  if (i > n)
    return;
  revBack(i + 1, n);
  cout << i << " ";
}

int main() {
  revBack(1, 10);
  return 0;
}

