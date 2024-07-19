#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<vector<int>> dp(100, vector<int>(1e5 + 1, 0));
	int lvar = min(k, vec[n - 1]);
	for (int i = 0; i <= lvar; i++) {
		dp[n - 1][i] = 1;
	}
	for (int i = n - 2; i >= 0; i--) {
		dp[i][0] = 1;
		int t = 1;
		for (int j = 1; j <= 1e5; j++) {
			if (vec[i] <= j) t = (t + 1ll * dp[i + 1][j]) % mod;
			dp[i][j] = t;
		}
	}
	cout << dp[0][k] << endl;
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