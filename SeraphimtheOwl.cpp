#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, m; cin >> n >> m;
	vector<int> a(n), b(n), s(n + 1, 0); for (auto &ele : a) cin >> ele; for (auto &ele : b) cin >> ele;
	for (int i = m - 1; i >= 0; i--) {s[i] = s[i + 1] + b[i];}
	// for (auto &ele : s) cout << ele << " "; cout << endl;
	int mn = INT_MAX;
	for (int i = 0; i < m; i++) {
		if (a[i] + s[i + 1] <= mn) mn = a[i] + s[i + 1];
	}
	for (int i = m; i < n; i++) {
		mn += min(a[i], b[i]);
	}
	cout << mn << endl;
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