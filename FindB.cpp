#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, q; cin >> n >> q;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> pre(n); pre[0] = vec[0];
	for (int i = 1; i < n; i++) pre[i] = pre[i - 1] + vec[i];
	while (q--) {
		int l, r; cin >> l >> r; l--, r--;
		int len = r - l + 1, t = (pre[r] - ((l - 1) >= 0 ? pre[l - 1] : 0));
		if (len == 1 || t < len + ceil(len / 2.0) ) {cout << "NO" << endl; }
		else cout << "YES" << endl;
	}
}

signed	 main() {
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

