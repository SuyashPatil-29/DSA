#include <bits/stdc++.h>
#include <string>

using namespace std;

int count = 5;

void pn(string name, int n) {
  if (n != 0) {
    cout << name << endl;
    n--;
    pn(name, n);
  }
  return;
}

int main() {
  pn("Suyash", 10);
  return 0;
}
