#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;


void solve() {
	int n, x; cin >> n >> x;
	vector<int> coins(n); for (auto &coin : coins) cin >> coin;
	// dp[coin_ind][sum]= no of ways to make the sum by using the coin from coin_ind to end only
	// dp[coin_ind][sum]= sum(dp[coin_ind][sum- coins[coin_ind]],dp[coin_ind+1][sum])
	// dp[coin_ind][0]  = 1
	//
	//
	//         (coin_ind,sum-coins[coin_ind])<---...----(coin_ind,sum)
	//				                                         |
	//				                                         v
	//				                                    (coin_ind+1,sum)

	// ans dp[0][sum];

	int sum = x;
	vector<int> dp(sum + 1); dp[0] = 1;
	for (int i = 1; i <= sum; i++) if (i - coins[n - 1] >= 0) dp[i] = dp[i - coins[n - 1]];
	for (int coin_ind = n - 2; coin_ind >= 0; coin_ind--) {
		vector<int> tmp(sum + 1); tmp[0] = 1;
		for (int j = 1; j <= sum; j++) tmp[j] = (((j - coins[coin_ind]) >= 0 ? tmp[j - coins[coin_ind]] : 0) + dp[j]) % mod;
		dp = tmp;
	}
	cout << dp[sum];
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