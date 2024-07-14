#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<vector<int>> vec(n + 1, vector<int>());
	vector<bool> leaf(n + 1, true);
	leaf[0] = leaf[1] = false;
	for (int i = 2; i <= n; i++) {
		int tmp; cin >> tmp;
		vec[tmp].push_back(i);
		leaf[tmp] = false;
	}
	for (int i = 1; i <= n; i++) {
		auto ele = vec[i];
		int cnt = 0;
		for (auto &e : ele) {
			if (leaf[e]) cnt++;
		}
		if ((!leaf[i] && cnt < 3) || cnt == 1 || cnt == 2) {cout << "NO" << endl; return;}
	}
	cout << "YES" << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}