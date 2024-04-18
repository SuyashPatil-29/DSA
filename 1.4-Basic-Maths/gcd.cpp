// #include <algorithm>
// #include <bits/stdc++.h>
// #include <cmath>
//
// using namespace std;
//
// int main() {
//   int num1, num2, res = 1;
//   cin >> num1 >> num2;
//   int mock_num = min(num1, num2);
//   for (int i = 2; i <= mock_num; i++) {
//     if (num1 % i == 0 && num2 % i == 0) {
//       if (i > res)
//         res = i;
//     }
//   }
//   cout << "The GCD or HCF is : " << res;
//   return 0;
// }

// Euclidean Algorithm - gcd(n1,n2) = gcd(n1-n2, n2)  where n1 > n2

// #include <algorithm>
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int findGCD(int n1, int n2, int minNum) {
//   int res = 1;
//   for (int i = 2; i <= minNum; i++) {
//     if (n1 % i == 0 && n2 % i == 0) {
//       if (i > res)
//         res = i;
//     }
//   }
//   return res;
// }
//
// int main() {
//   int num1, num2, res = 1;
//   cin >> num1 >> num2;
//   int minNum = min(num1, num2);
//   int maxNum = max(num1, num2);
//   cout << "The GCD or HCF is : " << findGCD((maxNum % minNum), minNum,
//   minNum); return 0;
// }

// Euclidean Algorithem for GCD with best time complexity

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  int minVal = min(a, b);
  int maxVal = max(a, b);
  if (minVal == 0)
    return maxVal;
  return gcd(maxVal % minVal, minVal);
}

int main() {
  int num1, num2;
  cin >> num1 >> num2;
  cout << "Gcd is : " << gcd(num1, num2);
  return 0;
}
