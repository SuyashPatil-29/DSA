#include<bits/stdc++.h>

using namespace std;


int main(){
  int n=1;
  for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      cout << n++ << " ";
    }
    cout << endl;
  }
  return 0;
}

