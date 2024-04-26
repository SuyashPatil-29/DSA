#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Rotate the array to the left by one position
  int temp = arr[0]; // Store the first element
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1]; // Shift elements to the left
  }
  arr[n - 1] = temp; // Place the first element at the end

  // Print the rotated array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
