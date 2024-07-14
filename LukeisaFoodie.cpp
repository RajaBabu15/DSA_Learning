#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, x; cin >> n >> x;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int ans = 0; int l = -x + vec[0], r = x + vec[0];
	for (int i = 1; i < n; i++) {
		int nl = -x + vec[i], nr = x + vec[i];
		if (nr < l || nl > r) ans++, l = nl, r = nr;
		else l = max(l, nl), r = min(r, nr);
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