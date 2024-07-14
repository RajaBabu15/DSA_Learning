#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n); for (auto &ele : a) cin >> ele; for (auto &ele : b) cin >> ele;
	// int ans = 0;

	vector<vector<int>> dp(n + 1, vector<int>(3001, 0));
	// for (auto &ele : dp) for (auto &e : ele) e = 0;

	// for (int i = 0; i <= 3000; i++) {
	// 	int cs = 0;
	// 	for (int j = 0; j <= 3000; j++) {
	// 		if (i == 0) {
	// 			if (j >= a[i] && j <= b[i]) cs++, dp[i][j] = cs;
	// 			else if (j > b[i]) dp[i][j] = cs;
	// 		}
	// 		else {
	// 			if (j >= a[i] && j <= b[i]) cs = (cs + dp[i - 1][j]) % 998244353, dp[i][j] = cs;
	// 			else dp[i][j] = cs;
	// 		}

	// 	}
	// 	ans = max(ans, cs);
	// }
	// cout << ans << endl;

	dp[0][0] = 1;
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < 3000; j++) dp[i][j + 1] = (dp[i][j + 1] + dp[i][j]) % 998244353;
		if (i != n) {
			for (int j = a[i]; j <= b[i]; j++) dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % 998244353;
		}
	}
	cout << dp[n][3000] << endl;
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