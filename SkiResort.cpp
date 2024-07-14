#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, k, q; cin >> n >> k >> q;
	vector<bool> vec(n); for (int i = 0, ele; i < n && cin >> ele; i++) vec[i] = ele <= q;
	int tmp = 0; int ans = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i]) {
			tmp++; ans += tmp >= k ? tmp - k + 1 : 0;
		}
		else tmp = 0;
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