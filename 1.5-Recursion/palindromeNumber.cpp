#include <bits/stdc++.h>

using namespace std;

bool checkPalindromeNumber(int num, int numCopy, int storedNum) {

  if (numCopy == 0) {
    if (storedNum == num)
      return true;
    return false;
  }

  int rem = numCopy % 10;
  storedNum = storedNum * 10 + rem;
  numCopy = numCopy / 10;
  return checkPalindromeNumber(num, numCopy, storedNum);
}
int main() {

  checkPalindromeNumber(121, 121, 0) == 1 ? cout << "Palindrome"

                                          : cout << "Not a palindrome";
  return 0;
}
