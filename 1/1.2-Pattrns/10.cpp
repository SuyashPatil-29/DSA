
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m = 2 * n - 1;
  m % 2 == 0 ? m = m / 2 : m = m / 2 + 1;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 1; i <= m - 1; i++) {
    for (int j = i; j <= m - 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
