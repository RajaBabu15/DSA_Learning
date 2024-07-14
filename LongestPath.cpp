#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, e; cin >> n >> e;
	vector<int> x(e), y(e); for (int i = 0; i < e; i++) cin >> x[i] >> y[i];
	vector<vector<int>> adj(n + 1, vector<int>());
	for (int i = 0; i < e; i++) {
		adj[x[i]].push_back(y[i]);
	}
	vector<int> dp(n + 1, 0);
	for (int i = 0; i < e; i++) dp[y[i]] = max(dp[y[i]], 1 + dp[x[i]]);
	int ans = INT_MIN;
	for (auto &ele : dp) ans = max(ans, ele);
	cout << ans << endl;
}

int main() {
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