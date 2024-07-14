#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> p(n + 1, 0);
	for (int i = 0; i < n; i++) {
		p[i + 1] = p[i] + vec[i];
	}
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		mx = max(mx, vec[i] * 2 + p[i]);
	}
	cout << mx << endl;
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