#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, mw; cin >> n >> mw;
	vector<int> w(n + 1, 0), v(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];
	//state
	//dp[i][j]=max value I can get out i=items[0,n-1] j=wt[0,mw]
	//transition
	//dp[i][j]max(v[i]+dp[i-1][j-w[i]],dp[i-1][j])
	vector<vector<int>> dp(n + 1, vector<int>(mw + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= mw; j++) {
			dp[i][j] = max(dp[i - 1][j], j >= w[i] ? v[i] + dp[i - 1][j - w[i]] : 0);
		}
	}
	// for (auto &ele : dp) {
	// 	for (auto &e : ele) {
	// 		cout << e << " ";
	// 	}
	// 	cout << endl;
	// }
	cout << dp[n][mw] << endl;

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