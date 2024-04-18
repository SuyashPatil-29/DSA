#include <bits/stdc++.h>
#include <string>

using namespace std;

bool checkStrPalindrome(string str, int i) {
  if (i >= str.length() / 2) {
    return true;
  }
  if (str.at(i) == str.at(str.length() - i - 1)) {
    return checkStrPalindrome(str, i + 1);
  }
  return false;
}

int main() {
  cout << checkStrPalindrome("121", 0);
  return 0;
}
