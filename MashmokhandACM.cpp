#include<bits/stdc++.h>

using namespace std;

int mod = 1000000007;

vector<vector<int>> getDivisors(int n) {
	vector<vector<int>> div(n, vector<int>());
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j % i == 0) div[j - 1].push_back(i);
		}
	}
	return div;
}

void solve() {
	int n, k;
	cin >> n >> k;
	// state define dp[i][j] as number of good sequences of length i that ends in j.
	// dp[1][j]=1
	// transition = dp[i][j]= sum(dp[i-1][x_r]) | x_r is the multiple of the j  so ,x_r= {divisors of the j}
	vector<vector<int>> dp(k + 1, vector<int>(n + 1));
	vector<vector<int>> divisors = getDivisors(n);
	for (int j = 1; j <= n; j++) dp[1][j] = 1;
	for (int i = 2; i <= k; i++) {

		for (int j = 1; j <= n; j++) {
			int sum = 0;
			for (auto &ele : divisors[j - 1]) sum = (sum + dp[i - 1][ele]) % mod;
			dp[i][j] = sum;
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = (ans + dp[k][i]) % mod;
	}
	cout << ans << endl;
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