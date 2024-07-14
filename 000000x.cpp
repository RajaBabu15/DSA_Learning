#include <bits/stdc++.h>

using namespace std;

#define int long long


/*
@Brief : 	get the sum using the minimum number of coins
			if sum is not obtainable then return -1;
*/
int dpfunc(int sum, const int n_coins, const vector<int> &coins, vector<int> &dp) {
	if (sum < 0) return INT_MAX;
	if (dp[sum] != -1) return dp[sum];
	int mn_ans = INT_MAX;
	for (int i = 0; i < n_coins; i++) {
		if (sum > coins[i]) {
			int sm_op = dpfunc(sum - coins[i], n_coins, coins, dp);
			if (sm_op != INT_MAX) {
				mn_ans = min(mn_ans, sm_op + 1);
			}
		}
		else if (sum == coins[i]) mn_ans = 1;
	}
	return dp[sum] = mn_ans;
}

void solve() {
	int n, x; cin >> n >> x;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	vector<int> dp(x + 1, -1);
	dpfunc(x, n, vec, dp);
	for (auto &ele : dp) cout << ele << " "; cout << endl;
	if (dp[x] != INT_MAX) cout << dp[x] << endl;
	else cout << -1 << endl;
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
