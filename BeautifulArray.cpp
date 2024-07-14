#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, k, b, s; cin >> n >> k >> b >> s;
	vector<int> vec(n, 0);
	int a0_mn = b * k, a0_mx = (b + 1) * k - 1;
	int sx = s - a0_mn, sn = s - a0_mx;
	// cout << a0_mn << " " << a0_mx << " " << sx << " " << sn << endl;
	if (sx < 0 && sn < 0) {cout << -1 << endl; return;}
	if (sn < 0) {
		a0_mx = a0_mn;
		sn = sx;
	}
	vec[0] = a0_mx;
	for (int i = 1; i < n; i++) {
		vec[i] = min(sn, k - 1);
		sn -= vec[i];
	}
	if (sn != 0) {cout << -1 << endl; return;}
	for (auto &ele : vec) cout << ele << " "; cout << endl;
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