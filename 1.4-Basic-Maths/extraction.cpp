#include <bits/stdc++.h>

using namespace std;

int main() {
  int num, sum = 0;
  cin >> num;
  int temp = num;
  while (num != 0) {
    int dig = num % 10;
    cout << dig << endl;
    sum += dig;
    num = num / 10;
  }
  cout << "The sum of " << temp << " is : " << sum << typeid(sum).name();
  return 0;
}
