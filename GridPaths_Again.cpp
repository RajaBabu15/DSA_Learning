#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

void solve() {
	int n; cin >> n;
	vector<string> vec(n); for (auto &ele : vec) cin >> ele;
	vector<vector<int>> dp(n, vector<int>(n));
	dp[0][0] = vec[0][0] == '.' ? 1 : 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j + 1 < n && vec[i][j + 1] == '.') dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % mod;
			if (i + 1 < n && vec[i + 1][j] == '.') dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % mod;
		}
	}
	cout << dp[n - 1][n - 1] << endl;
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