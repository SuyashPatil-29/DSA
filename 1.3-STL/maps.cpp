#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
  // map<int, vector<int>> mpp;
  // multimap<int, vector<int>> mpp;
  unordered_map<int, vector<int>> mpp;

  mpp.emplace(2, vector<int>{9, 7, 6});
  mpp.emplace(2, vector<int>{3, 4, 5});
  mpp.emplace(2, vector<int>{1, 4, 8});
  mpp.emplace(1, vector<int>{2, 3, 4});
  mpp.emplace(4, vector<int>{2, 5, 6});

  for (auto pair : mpp) {
    cout << "{ " << pair.first << " , ";
    for (int num : pair.second) {
      cout << num << " ";
    }
    cout << "}" << endl;
  }

  int num = 7;
  std::bitset<sizeof(int) * 8> bits(num);
  int count = bits.count();
  std::cout << "Number of set bits in " << num << " is: " << count << std::endl;

  string str = "123";

  do {
    cout << str << endl;
  } while (next_permutation(str.begin(), str.end()));
  return 0;
}
