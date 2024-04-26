// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   int n;
//   cin >> n;
//   vector<int> v;
//   for (int i = 1; i <= n; i++) {
//     if (n % i == 0) {
//       v.emplace_back(i);
//       cout << i << endl;
//     }
//   }
//   if (v.size() == 0) {
//     cout << "Number is a prime number";
//   }
//   return 0;
// }

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> s;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      s.insert(i);
      if (n % i == 0 && i != n / i) {
        s.insert(n / i);
      }
    }
  }
  for (auto it : s) {
    cout << it << endl;
  }
  return 0;
}
