#include<bits/stdc++.h>

using namespace std;


void solve() {
	int n, m; cin >> n >> m;
	vector<vector<int>> vec(n, vector<int>(m)), dp(n, vector<int>(m));
	for (auto &ele : vec) for (auto &e : ele) cin >> e;
	for (auto &ele : dp)for (auto &e : ele) e = -1;
	dp[n - 1][m - 1] = grid[n - 1][m - 1];

}

int main() {
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