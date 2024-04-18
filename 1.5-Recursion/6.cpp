// #include <bits/stdc++.h>
//
// using namespace std;
//
// int sum = 0;
//
// int sumOfN(int i, int n) {
//   if (i <= n) {
//     ::sum = ::sum + i;
//     sumOfN(i + 1, n);
//   }
//   return ::sum;
// }
//
// int main() {
//
//   cout << sumOfN(1, 5);
//
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int sumOfN(int i, int sum) {
//   if (i > 0) {
//     return sumOfN(i - 1, sum + i);
//   }
//   return sum;
// }
//
// int main() {
//
//   cout << sumOfN(5, 0);
//
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int sumOfN(int i, int n, int sum) {
//   if (i > n) {
//     return sum;
//   }
//   return sumOfN(i + 1, n, sum + i);
// }
//
// int main() {
//   cout << sumOfN(1, 5, 0);
//   return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int sumN(int n) {
  if (n == 0)
    return 0;
  return n + sumN(n - 1);
}

int main() {
  cout << sumN(5);
  return 0;
}
