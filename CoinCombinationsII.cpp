#include<bits/stdc++.h>

using namespace std;

#define int long long

int dpfunc(int sum, int ind, const int n_coins, const vector<int> &coins, vector<int> &dp) {
	if (sum < 0 || ind >= n_coins) return -1;
	if (dp[sum] != -1) return dp[sum];
	int ans = 0;
	for (int i = ind; i < n_coins; i++) {
		int coin = coins[i];
		if (sum > coin) {
			int tmp = dpfunc(sum - coin, i, n_coins, coins, dp);
			if (tmp != -1)
				ans = (ans + tmp) % (1000000007);
		}
		else if (sum == coin && ind != i) ans = (ans + 1) % (1000000007);
	}
	dp[sum] = ans;
	return ans;
}

void solve() {
	int n_coins, sum; cin >> n_coins >> sum;
	vector<int> coins(n_coins); for (auto &coin : coins) cin >> coin;
	sort(coins.begin(), coins.end());
	vector<int> dp(sum + 1, -1);
	dpfunc(sum, 0, n_coins, coins, dp);
	cout << dp[sum] << endl;
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