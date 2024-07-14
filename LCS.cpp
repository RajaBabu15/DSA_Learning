#include<bits/stdc++.h>

using namespace std;

void solve() {
	string s, t; cin >> s >> t;
	int n = s.size(), m = t.size();
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s[i - 1] == t[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	string ans = "";
	int i = n, j = m;
	while (i && j) {
		if (s[i - 1] == t[j - 1]) ans = ans + s[i - 1], i--, j--;
		else if (dp[i][j] == dp[i - 1][j]) i--;
		else j--;
	}
	int sz = ans.size();
	if (sz == 0) {
		cout << endl; return;
	}
	else {
		reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
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