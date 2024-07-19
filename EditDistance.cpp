#include<bits/stdc++.h>

using namespace std;

void solve() {
	string a, b; cin >> a >> b;
	int n = a.size(), m = b.size();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1));
	for (int i = 0; i <= n; i++) dp[i][0] = i;
	for (int j = 0; j <= m; j++) dp[0][j] = j;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				int t1 = dp[i - 1][j - 1] + 1; // Either changing the last character of the 1st as last character of 2nd
				// or changing the last character of the 2nd as last charcter of 1st
				int t2 = dp[i - 1][j] + 1; // removing the last character of the first string
				int t3 = dp[i][j - 1] + 1; // removing the last character of the second string and comparing the rest string
				dp[i][j] = min(min(t1, t2), t3);
			}
		}
	}
	cout << dp[n][m] << endl;
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