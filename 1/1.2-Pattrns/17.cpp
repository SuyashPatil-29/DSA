#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;
    cin >> num;
    char n = 'A' + num - 1;

    for (int i = 1; i <= 5; i++) {
        char temp = n;
        for (char j = temp; j < temp + i; j++) {
            cout << j << " ";
        }
        n--;
        cout << endl;
    }

    return 0;
}
