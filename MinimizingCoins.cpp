#include <bits/stdc++.h>

using namespace std;

#define int long long

int dpfunction(int sum, const int n_coins, const vector<int> &coins, vector<int> &dp) {
	if (sum < 0) return -1;
	if (sum == 0) return 0;
	if (dp[sum] != -1) return dp[sum];
	if (dp[sum] == INT_MAX) return -1;
	int mn = INT_MAX;
	for (auto &coin : coins) {
		if (sum > coin) {
			int tmp = dpfunction(sum - coin, n_coins, coins, dp);
			if (tmp != -1) mn = min(mn, tmp + 1);
		}
		if (sum == coin) mn = min(mn, 1ll);
	}
	dp[sum] = mn;
	return mn;
}

void solve() {
	int n_coins, sum; cin >> n_coins >> sum;
	vector<int> coins(n_coins); for (auto &coin : coins) cin >> coin;
	vector<int> dp(sum + 1, -1);
	dpfunction(sum, n_coins, coins, dp);
	if (dp[sum] != INT_MAX) cout << dp[sum] << endl; else cout << -1 << endl;
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
