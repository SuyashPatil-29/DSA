#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  int num;
  cin >> num;
  int mock_num = sqrt(num);
  bool res = 0;
  for (int i = 2; i <= mock_num; i++) {
    if (num % i == 0) {
      res = 1;
    }
  }
  res != 0 ? cout << "Not a prime number" : cout << "Prime Number";
  return 0;
}
