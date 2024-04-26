#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  int num;
  cin >> num;
  int mock_num = num, rev_num = 0;
  int digits = log10(num) + 1;
  while (mock_num != 0) {
    int rem = mock_num % 10;
    rev_num = rev_num + pow(rem, digits);
    mock_num = mock_num / 10;
  }
  rev_num == num ? cout << "true" : cout << "false";
  return 0;
}
