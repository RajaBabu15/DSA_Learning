#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	vector<vector<int>> dp(a + 1, vector<int>(b + 1, INT_MAX));

	// Initialize the dp array for base cases
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			if (i == j) {
				dp[i][j] = 0; // No cuts needed if already a square
			} else {
				// Horizontal cuts
				for (int h = 1; h < i; h++) {
					dp[i][j] = min(dp[i][j], dp[h][j] + dp[i - h][j] + 1);
				}
				// Vertical cuts
				for (int v = 1; v < j; v++) {
					dp[i][j] = min(dp[i][j], dp[i][v] + dp[i][j - v] + 1);
				}
			}
		}
	}

	cout << dp[a][b] << endl;
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
