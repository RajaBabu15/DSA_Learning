#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;
const int M = 2e5 + 1;
vector<vector<int>> dp(M, vector<int>(10, 0));

void precompute() {
	dp[0] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	for (int i = 1; i < M; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 9) {
				dp[i][j] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
			}
			else {
				dp[i][j] = dp[i - 1][j + 1];
			}
		}
	}
}

void solve() {
	int n, m; cin >> n >> m;
	int ans = 0;
	while (n) {
		ans = (ans + dp[m][n % 10]) % mod;
		n /= 10;
	}
	cout << ans << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	precompute();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}