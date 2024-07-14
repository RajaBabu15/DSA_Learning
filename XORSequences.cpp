#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int x, y; cin >> x >> y;
	for (int i = 0; i < 64; i++) {
		int ans = (i > 0 ? (1 << i) : 1);
		if ((x & 1) != (y & 1)) {cout << ans << endl; return;}
		x >>= 1; y >>= 1;
	}

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}