// Iterative Code
#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> arr = {73, 54, 44, 23, 12, 9, 8, 6, 5, 3, 1};
  int n = arr.size();
  int target = 23;

  int lb = 0, ub = n - 1;

  while(lb<=ub){
    int mid = lb + (ub - lb);
    if (arr[mid] == target) {
      cout << mid;
      return 0;
    }
    else if(target > arr[mid]){
      ub = mid - 1;
    }
    else{
      lb = mid + 1;
    }
  }

  cout << "Not found";
  return 0;
}
