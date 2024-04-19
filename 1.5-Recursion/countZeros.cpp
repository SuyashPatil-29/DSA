#include <bits/stdc++.h>

using namespace std;

int countZeros(int num, int count) {
  if (num == 0) {
    return count;
  }
  int rem = num % 10;
  if (rem == 0)
    count = count + 1;
  return countZeros(num / 10, count);
}

int main() {
  cout << "The number of zeroes are : " << countZeros(1000000001, 0);
  return 0;
}
