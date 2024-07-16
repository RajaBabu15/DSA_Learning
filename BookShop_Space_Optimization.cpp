#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x; cin >> n >> x;
	vector<int> prices(n), pages(n);
	for (auto &ele : prices) cin >> ele;
	for (auto &ele : pages) cin >> ele;

	/* vector<vector<int>> dp(n, vector<int>(x + 1)); */
	vector<int> dp1(x + 1);


	//state : dp[i][j] = maximum pages i can get in the prices less than or equal to j with bookes less than or equal to ind i
	// base case dp[i][0]=0 if i have sum=0 , then I can't get any pages
	// transition dp[i][j]=max(pages[i]+dp[i-1][j-prices[i]],dp[i-1][j])

	// output dp[n-1][sum];

	/* for (int i = 0; i < n; i++) dp[i][0] = 0; */
	dp1[0] = 0;
	/* for (int i = 1; i <= x; i++) if (i >= prices[0]) dp[0][i] = pages[0]; */
	for (int i = 1; i <= x; i++) if (i >= prices[0]) dp1[i] = pages[0];

	for (int i = 1; i < n; i++) {
		vector<int> tmp(x + 1); tmp[0] = 0;
		for (int sum = 0; sum <= x; sum++) {
			int pick = 0, notPick = 0;
			if (sum >= prices[i]) pick = pages[i] + dp1[sum - prices[i]];
			notPick = dp1[sum];
			tmp[sum] = max(pick, notPick);
		}
		dp1 = tmp;
	}
	cout << dp1[x] << endl;
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