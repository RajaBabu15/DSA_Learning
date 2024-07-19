#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<long double> p(n); for (auto &ele : p) cin >> ele;
	vector<vector<long double>> dp(n, vector<long double>(n + 1, 0));
	// state dp[coin_ind][no_of_heads] = what is the probabilyt of the no_of_heads upto coin_ind
	dp[0][0] = 1 - p[0];
	dp[0][1] = p[0];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i + 1; j++) {
			dp[i][j] += (1 - p[i]) * dp[i - 1][j];
			if (j > 0) dp[i][j] += p[i] * dp[i - 1][j - 1];
		}
	}

	long double ans = 0.0;
	for (int j = n / 2 + 1; j <= n; j++) {
		ans += dp[n - 1][j];
	}

	cout << fixed << setprecision(10) << ans << endl;

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