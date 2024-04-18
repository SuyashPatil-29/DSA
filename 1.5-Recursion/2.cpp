#include <bits/stdc++.h>

using namespace std;

int i = 1;
void otN(int n) {
  if (::i <= n) {
    cout << ::i << " ";
    ::i++;
    otN(n);
  }
}

int main() {
  otN(23);
  return 0;
}
