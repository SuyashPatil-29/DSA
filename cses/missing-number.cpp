#include <iostream>
#include <vector>

int findMissing(const std::vector<long long int> &v, long long int n) {
  long long int expectedSum = (n * (n + 1)) / 2;
  long long int actualSum = 0;

  for (long long int num : v) {
    actualSum += num;
  }

  return expectedSum - actualSum;
}

int main() {
  long long int n;
  std::cin >> n;

  if (n > 2 * 100000 || n < 2) {
    return 0;
  }

  std::vector<long long int> v(n - 1);
  for (long long int &j : v) {
    std::cin >> j;
    if (j > n) {
      return 0;
    }
  }

  std::cout << findMissing(v, n);
  return 0;
}
