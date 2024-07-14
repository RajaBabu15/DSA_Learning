#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, p; cin >> n >> p;
	map<int, int> mp; mp.clear();
	vector<pair<int, int>> vec(n); for (auto &ele : vec) cin >> ele.first; for (auto &ele : vec) cin >> ele.second;
	for (auto [x, y] : vec) mp[y] += x;
	long long cost = p;
	n--;
	for (auto [x, y] : mp) {
		int k = min(n, y);
		n -= k;
		cost += min(p, x) * k;
	}
	cout << cost << endl;
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
}