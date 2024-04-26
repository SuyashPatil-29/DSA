#include <bits/stdc++.h>
#include <climits>
#include <memory>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n], arrcpy[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    arrcpy[i] = arr[i];
  }

  int largest = arr[0];
  int slargest = arr[0];
  int smallest = INT_MAX;
  int ssmallest = INT_MAX - 1;

  for (int i = 1; i < n; i++) {
    if (arr[i] > slargest && arr[i] != largest) {
      swap(slargest, arr[i]);
      if (slargest > largest) {
        swap(slargest, largest);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (arrcpy[i] < ssmallest) {
      swap(ssmallest, arrcpy[i]);
      if (ssmallest < smallest && arrcpy[i] != smallest) {
        swap(ssmallest, smallest);
      }
    }
  }

  cout << "Smallest element and second smallest element are : {" << smallest
       << " , " << ssmallest << " }" << endl;

  cout << "Largest element and second largest elements are : {" << largest
       << " , " << slargest << " }" << endl;
  return 0;
}
