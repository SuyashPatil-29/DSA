#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int f(int num) {
  if (num > 0) {
    cout << ceil(num) << endl;
    num--;
    return f(num);
  }
  return 0;
}

int main() {
  f(5);
  return 0;
}
