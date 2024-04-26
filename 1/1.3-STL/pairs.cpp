#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main() {
  pair<int, pair<double, int>> p[] = {
      {1, {1.5, 2}}, {3, {3.5, 4}}, {5, {5.5, 6}}};
  cout << p[1].first << " is the first number" << endl;
  cout << p[1].second.first << " is the second number" << endl;
  cout << p->second.first;
  return 0;
}

