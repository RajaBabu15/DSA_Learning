#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

int be(int n, int p) {
	int ans = n;
	for (int i = 1; i < p; i++) {
		ans = (ans + n) % mod;
	}
	return ans;
}

const int N = 1000001;

//state
// dp[i][0]= at the ith index top cell is divided into 2
// dp[i][1]= at the ith index top cell is not divided into 2

// for more detail see .\Code\Noob%20Practics.one#DSA&section-id={56B6B452-7A1D-4EF9-8503-76645EEC6ED2}&page-id={8D33CC99-BC1F-4DC1-891A-68276DD7F6AB}&end


vector<vector<int>> dp(N, vector<int>(2, 1));
void precompute() {
	for (int i = 1; i < N; i++) {
		dp[i][0] = ((be(dp[i - 1][0] , 4)) % mod + dp[i - 1][1]) % mod;
		dp[i][1] = ((be(dp[i - 1][1] , 2)) % mod + dp[i - 1][0]) % mod;
	}
}

void solve() {
	int n; cin >> n;
	cout << (dp[n - 1][0] + dp[n - 1][1]) % mod << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	precompute();
	while (t--) {
		solve();
	}
	return 0;
}