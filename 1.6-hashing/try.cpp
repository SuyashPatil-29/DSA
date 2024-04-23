#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  vector<int> v(n + 1, 0);

  cout << "Enter " << n << " elements:" << endl;

  for (int i = 0; i < n; i++) { // Fixing loop to start from 0
    int num;
    cin >> num;
    if (num <= n && num > 0) // Correcting the condition
      v[num] += 1;
  }

  cout << "Enter the number of elements you want to check for:" << endl;
  int j;
  cin >> j;

  while (j != 0) {
    int num;
    cin >> num;
    if (num <= n)
      cout << num << " appears " << v[num] << " times" << endl;
    else
      cout << num << " appears 0 times" << endl;
    j--;
  }

  return 0;
}

