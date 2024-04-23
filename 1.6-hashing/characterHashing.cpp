#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  int hash[26] = {0}; // Initialize with zeros

  for (char c : str) {
    if (isalpha(c) && islower(c)) { // Check if character is a lowercase letter
      hash[c - 'a'] += 1; // Increment count for the corresponding letter
    }
    continue;
  }

  cout << "Enter the number of chars you want to search:" << endl;
  int t;
  cin >> t;

  while (t--) {
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << endl;
  }
  return 0;
}

