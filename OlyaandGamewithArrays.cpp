#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<vector<int>> vec;
	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		vector<int> tmp(m); for (auto &ele : tmp) cin >> ele;
		sort(tmp.begin(), tmp.end());
		vec.push_back(tmp);
	}
	int sum = 0, mn = INT_MAX;
	vector<int> tmp(n);
	for (int i = 0; i < n; i++) sum += vec[i][1], tmp[i] = vec[i][0], mn = min(mn, vec[i][1]);
	sort(tmp.begin(), tmp.end());
	sum = sum - mn + tmp[0];

	cout << sum << endl;

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