#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, i;
  cin >> n;

  // Using vector instead of array for dynamic size
  vector<int> arr(n + 1, 0);

  cout << "Enter " << n + 1 << " elements" << endl;

  for (int j = 0; j < n + 1; j++) {
    int num;
    cin >> num;
    if (num <= n)
      arr[num] = arr[num] + 1;
  }

  cout << "Enter the no of elements you want to check for" << endl;
  cin >> i;

  while (i != 0) {
    int num;
    cin >> num;
    if (num <= n)
      cout << num << " appears " << arr[num] << " times" << endl;
    else
      cout << num << " appears 0 "
           << "times" << endl;
  }

  return 0;
}

