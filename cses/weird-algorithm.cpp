#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

void weird(long long long int n) {
  if (n == 1) {
    cout << abs(n);
    return;
  }
  cout << abs(n) << " ";
  if (n % 2 == 0) {
    weird(abs(n / 2));
  } else {
    weird(abs(n * 3 + 1));
  }
}

int main() {
  long long long int n;
  cin >> n;
  if (n > 1000000 || n < 1)
    return 0;
  weird(n);
  return 0;
}
