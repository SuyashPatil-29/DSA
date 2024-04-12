// #include<bits/stdc++.h>
//
// using namespace std;
//
//
// int main(){
//   vector<pair<int,int>> v;
//   vector<pair<int,int>>::iterator it = v.begin();
//
//   v.emplace_back({2,3});
//   v.emplace_back(3,23.4);
//
//   it = it+1;
//
//   cout << (*it).first;
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> v;
//
//   double a = 5.0;
//
//   v.emplace_back(1);
//   v.emplace_back(2);
//   v.emplace_back(3);
//   v.emplace_back(4);
//   v.emplace_back(5);
//   v.emplace_back(6);
//
//   // auto it = *v.begin();
//   // it = it + 3;
//
//   // for (auto it = v.begin(); it < v.end(); it++) {
//   //   cout << *it << endl;
//   // }
//
//   for(auto it : v){
//     cout << it << endl;
//   }
//
//   cout << typeid(a).name();
//
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> v;
//
//   for (int i = 0; i < 5; i++) {
//     v.emplace_back(i);
//   }
//
//   for (auto it = v.begin(); it < v.end(); it++) {
//     cout << *it << endl;
//   }
//
//   cout << "---------------------------------------------------" << endl;
//
//   v.erase(v.begin()+1, v.begin()+3);
//
//   for (auto it = v.begin(); it < v.end(); it++) {
//     cout << *it << endl;
//   }
//
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   vector<int> v(5, 100);
//
//   v.insert(v.begin(), 2, 1000);
//
//   v.insert(v.begin() + 1, 2000);
//
//   vector<int> copy(2, 50);
//
//   v.insert(v.begin(), copy.begin(), copy.end());
//
//   for (auto it : v) {
//     cout << it << endl;
//   }
//
//   cout << "----------------------------------------------" << endl;
//
//   cout << v.size() << endl;
//
//   cout << "----------------------------------------------" << endl;
//
//   for (int i = 0; i < v.size(); i++) {
//     v.pop_back();
//   }
//
//   for (auto it : v) {
//     cout << it << endl;
//   }
//
//   cout << "----------------------------------------------" << endl;
//
//   cout << v.size() << endl;
//
//   return 0;
// }

// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main() {
//   stack<int> st;
//
//   for (int i = 1; i <= 5; i++) {
//     st.emplace(i);
//   }
//
//   stack<int> temp(st);
//
//   cout << st.top() << endl;
//   cout << "---------------------------------------------" << endl;
//   for (int i = 1; i <= st.size(); i++) {
//     cout << temp.top() << endl;
//     temp.pop();
//   }
//   cout << "---------------------------------------------" << endl;
//   cout << st.top() << endl;
//
//   cout << "---------------------------------------------" << endl;
//   cout << st.empty() << endl;
//
//   st.pop();
//
//   cout << "---------------------------------------------" << endl;
//   cout << st.top();
//   return 0;
// }

#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> pq;

  pq.push(3);
  pq.push(8);
  pq.push(16);
  pq.push(2);
  pq.push(11);

  priority_queue<int> copy(pq);

  for (int i = 0; i < pq.size(); i++) {
    cout << copy.top() << endl;
    copy.pop();
  }

  return 0;
}
