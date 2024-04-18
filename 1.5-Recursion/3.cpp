#include <bits/stdc++.h>

using namespace std;

void reverse(int num) {
  if (num > 0) {
    cout << num << " ";
    num--;
    reverse(num);
  }
}

int main() {
  reverse(11);
  return 0;
}
