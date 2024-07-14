#include<bits/stdc++.h>

using namespace std;

#define int long long

int get(const vector<int> &tmp) {
	int n = tmp.size();
	vector<vector<int>> dp(n, vector<int>(2, 0));
	dp[0][0] = dp[0][1] = tmp[0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = min(dp[i - 1][0] + tmp[i], dp[i - 1][1] + tmp[i]);
		dp[i][1] = min(dp[i - 1][0] * tmp[i], dp[i - 1][1] * tmp[i]);
	}
	return min(dp[n - 1][0], dp[n - 1][1]);
}

void solve() {
	int n; cin >> n;
	string str; cin >> str;
	if (n == 2) {
		int ans = (str[0] - '0') * 10 + (str[1] - '0'); cout << ans << endl;
		return;
	}

	int mn = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		vector<int> tmp;
		for (int j = 0; j < n; j++) {
			if (j == i + 1) continue;
			if (j == i) tmp.push_back((str[j] - '0') * 10 + (str[j + 1] - '0'));
			else tmp.push_back(str[j] - '0');
		}
		// cout << i << ":: ";
		// for (auto &ele : tmp) cout << ele << " "; cout << endl;
		mn = min(mn, get(tmp));
	}
	cout << mn << endl;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}