#include<bits/stdc++.h>

using namespace std;

void solve() {
  string str; cin >> str;
  int r = 0;
  if (str[0] == 'R') r = 0;
  else if (str[1] == 'R') r = 1;
  else r = 2;
  int m = 0;
  if (str[0] == 'M') m = 0;
  else if (str[1] == 'M') m = 1;
  else m = 2;
  if (r == 0 || (r == 1 and m == 2) )cout << "Yes" << endl;
  else cout << "No" << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
  freopen("input1.txt", "r", stdin);
  freopen("output1.txt", "w", stdout);
#endif
  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}