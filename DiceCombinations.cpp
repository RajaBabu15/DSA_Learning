#include<bits/stdc++.h>

using namespace std;

#define int long long

int dpfunc(int n, vector<int> &dp) { // dpfunc(n) return {  the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6. }
	// cout << "LOG" << n << endl;
	if (n == 1) {dp[1] = 1; return 1;}
	if (dp[n] != -1) return dp[n];
	else {
		int sum = 0;
		for (int i = 1; i <= 6; i++) {
			if (n > i)
				sum = (sum + dpfunc(n - i, dp)) % (1000000007);
			else if (n == i) sum = (sum + 1) % (1000000007);
		}
		dp[n] = sum;
		return sum;
	}

}

void solve() {
	int n; cin >> n;
	vector<int> dp(n + 1, -1);
	dpfunc(n, dp);
	cout << dp[n] << endl;
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