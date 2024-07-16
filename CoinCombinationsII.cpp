#include<bits/stdc++.h>

using namespace std;



void solve() {
	int MOD = 1000000007;
	int n, x; cin >> n >> x;
	vector<int> coins(n); for (auto &coin : coins) cin >> coin;
	// state : dp[i][k]= no of ways to get the sum k using (i to n-1) pickable coins
	// base case: dp[i][0]=1 ,  no of ways to get the sum = 0 is 1
	// transition : dp[i][k]=dp[i][k-c_i]+dp[i+1][k];
	vector<vector<int>> dp(n + 1, vector<int>(x + 1));
	for (int i = 0; i < n; i++) {dp[i][0] = 1;}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 1; j <= x; j++) {
			int tmp = (j - coins[i] >= 0) ? dp[i][j - coins[i]] : 0;
			dp[i][j] = (tmp + dp[i + 1][j]) % MOD;
		}
	}
	cout << dp[0][x] << endl;
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
