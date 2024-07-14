#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, l, r; cin >> n >> l >> r;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int cs = 0, ans = 0, s = 0;
	for (int i = 0; i < n; ++i) {
		cs += vec[i];
		while (s <= i && cs > r) cs -= vec[s], s++;
		if (cs >= l && cs <= r)  ans++, cs = 0, s = i + 1;
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