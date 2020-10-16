#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n / 2; i++) {
      int d = abs(s[i] - s[n - 1 - i]);
      if( d!= 0 and d!= 2) {
        flag= false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
