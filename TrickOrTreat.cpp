#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n); for (auto &ele : a) cin >> ele; for (auto &ele : b) cin >> ele;
	vector<int> am(m, 0), bm(m, 0); for (auto &ele : a) am[ele % m]++; for (auto &ele : b) bm[ele % m]++;
	int ans = 0;
	for (int i = 0; i < m; i++) {
		ans += am[i] * bm[(m - i) % m];
	}
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