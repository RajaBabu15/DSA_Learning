#include<bits/stdc++.h>

using namespace std;

const int mod = 998244353;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (auto &ele : a) cin >> ele;
	for (auto &ele : b) cin >> ele;
	vector<vector<int>> dp(3001, vector<int>(3001, 0));
	for (int j = 3000; j >= 0; j--) {
		dp[n - 1][j] = (j >= a[n - 1] && j <= b[n - 1]) + ((j + 1 <= 3000) ? dp[n - 1][j + 1] : 0);
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 3000; j >= 0; j--) {
			if (j >= a[i] && j <= b[i])
				dp[i][j] = (dp[i + 1][j] + ((j + 1 <= 3000) ? dp[i][j + 1] : 0)) % mod;
			else
				dp[i][j] = ((j + 1 <= 3000) ? dp[i][j + 1] : 0);
		}
	}
	cout << dp[0][a[0]] << endl;
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