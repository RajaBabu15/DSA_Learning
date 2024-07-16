#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> dp(n + 1, 1000000007);
	dp[0] = 0;
	// dp[i] = the minimum number of steps to make i as 0
	for (int i = 1; i <= n; i++) {
		int i_cpy = i;
		int tmp = dp[i - i_cpy % 10] + 1;
		i_cpy /= 10;
		while (i_cpy != 0) {
			tmp = min(tmp, dp[i - i_cpy % 10] + 1);
			i_cpy /= 10;
		}
		dp[i] = tmp;
	}
	cout << dp[n] << endl;
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