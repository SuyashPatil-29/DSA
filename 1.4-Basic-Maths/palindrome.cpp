#include <bits/stdc++.h>

using namespace std;

int main() {
  int num;
  cin >> num;
  int mock_num = num, rev_num = 0;
  while (mock_num != 0) {
    int rem = mock_num % 10;
    rev_num = rev_num * 10 + rem;
    mock_num = mock_num / 10;
  }
  rev_num == num ? cout << "true" : cout << "false";
  return 0;
}
