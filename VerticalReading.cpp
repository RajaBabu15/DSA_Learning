#include<bits/stdc++.h>

using namespace std;

void solve() {
  string s, w; cin >> s >> w;
  int sl = s.size(), wl = w.size();
  for (int i = 1; i < sl; i++) {
    for (int j = 0; j < sl; j++) {
      if (wl == 1 && i == 1 && j == sl - 1) continue;
      string tmp = "";
      for (int k = j; k < sl; k += i) {
        tmp += s[k];
      }
      if (tmp == w) {cout << tmp << " " << w << " " << i << " " << j <<  " Yes" << endl; return;}
    }
  }
  cout << "No" << endl;
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