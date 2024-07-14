#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, m; cin >> n >> m;
	int val = n / m;
	int tc = val * m;
	if (n - tc > val) cout << "NO" << endl;
	else cout << "YES" << endl << 2 << endl << val << " " << val + 1 << endl;
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