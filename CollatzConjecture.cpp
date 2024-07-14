#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int x, y, k; cin >> x >> y >> k;
	while (x != 1) {

		int t = x / y + 1;
		int e = t * y - x;
		if (k < e) {cout << k + x << endl; return;}
		k -= e, x += e;
		while (x % y == 0) x /= y;
	}
	cout << 1 + k % (y - 1) << endl;
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