#include<bits/stdc++.h>

using namespace std;

#define int long long

int dpfunc(int sum, int n_coins, const vector<int> &coins, vector<int> &dp) //dpfunc represent the number of ways sum can be get using the coins denominations
{
	// cout << "Log " << sum << endl;
	if (sum <= 0) return 0;
	if (dp[sum] != -1) return dp[sum];
	int ans = 0;
	for (int i = 0; i < n_coins; i++) {
		if (sum > coins[i]) ans = (ans + dpfunc(sum - coins[i], n_coins, coins, dp)) % (1000000007);
		else if (sum == coins[i] ) ans = (ans + 1) % (1000000007);
	}
	dp[sum] = ans;
	return ans;
}

void solve() {
	int n, x; cin >> n >> x;
	vector<int> c(n); for (auto &ele : c) cin >> ele;
	vector<int> dp(x + 1, -1); // dp[n] =dpfunc(n);
	dpfunc(x, n, c, dp);
	// for (auto &ele : dp) cout << ele << " "; cout << endl;
	cout << dp[x] << endl;
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