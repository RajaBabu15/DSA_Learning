#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, a, b; cin >> n >> a >> b;
	if (a > b) {cout << 1ll * a*n  << endl; return;}
	int r = min(n, b), k = b - a + 1;
	k = min(k, r);
	int ans = 1LL * k * b + k - k * (k + 1ll) / 2ll + 1LL * (n - k) * a ;
	cout << ans << endl;
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