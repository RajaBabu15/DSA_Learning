#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	string s, c; cin >> s;
	vector<int> ind(m); for (auto &ele : ind) cin >> ele;
	cin >> c;

	sort(ind.begin(), ind.end());
	for (int i = 1; i < m; i++) if (ind[i - 1] == ind[i]) ind[i - 1] = INT_MAX;
	sort(ind.begin(), ind.end());

	// for (auto &ele : ind) cout << ele << " "; cout << endl;
	sort(c.begin(), c.end());
	for (int i = m - 1; i >= 0; i--) {
		if (ind[i] == INT_MAX) continue;
		// cout << ind[i] << " " << c[i] << endl;
		s[ind[i] - 1] = c[i];
	}
	cout << s << endl;
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