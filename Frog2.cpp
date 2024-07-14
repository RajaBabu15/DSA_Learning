#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> vec(n), dp(n, INT_MAX); for (auto &ele : vec) cin >> ele;
	dp[0] = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j <= k; j++) {
			if (i + j < n) dp[i + j] = min(dp[i + j], dp[i] + abs(vec[i + j] - vec[i]));
		}
	}
	cout << dp[n - 1] << endl;


}

int main() {
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