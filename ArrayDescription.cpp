#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<vector<int>> dp(n, vector<int>(m + 2, 0));
	if (vec[0] == 0) {
		for (int j = 1; j <= m; j++) dp[0][j] = 1;
	}
	else {
		dp[0][vec[0]] = 1;
	}
	for (int i = 1; i < n; i++) {
		if (vec[i] == 0) {
			for (int j = 1; j <= m; j++) {
				dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 1][j]) % mod + dp[i - 1][j + 1]) % mod;
			}
		}
		else {
			dp[i][vec[i]] = ((dp[i - 1][vec[i] - 1] + dp[i - 1][vec[i]]) % mod + dp[i - 1][vec[i] + 1]) % mod;
		}
	}
	int ans = 0;
	for (int j = 0; j < m + 2; j++) ans = (ans + dp[n - 1][j]) % mod;
	cout << ans << endl;
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