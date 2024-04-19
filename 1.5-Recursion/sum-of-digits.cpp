#include <bits/stdc++.h>

using namespace std;

int globalSum = 0;

int sumOfDigits(int num, int sum) {
  if (num == 0)
    return sum;
  int rem = num % 10;
  sum = sum + rem;
  num /= 10;
  return sumOfDigits(num, sum);
}

int main() {
  cout << "The sum of numbers is " << sumOfDigits(123, 0);
  return 0;
}
