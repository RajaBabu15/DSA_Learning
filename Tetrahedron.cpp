#include<bits/stdc++.h>

using namespace std;

const int mod = 1000000007;


vector<vector<int>> mul(const vector<vector<int>> &a, const vector<vector<int>>&b) {
	vector<vector<int>> ans(4, vector<int>(4));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			int tmp = 0;
			for (int k = 0; k < 4; k++) {
				tmp = (tmp + 1ll * a[i][k] * b[k][j]) % mod;
			}
			ans[i][j] = tmp;
		}
	}
	return ans;
}

vector<vector<int>> binary_exponentiation(const vector<vector<int>> &vec, int p) {
	if (p == 0) {
		vector<vector<int>> identity(4, vector<int>(4, 0));
		for (int i = 0; i < 4; i++) identity[i][i] = 1;
		return identity;
	}
	vector<vector<int>> so = binary_exponentiation(vec, p / 2);
	so = mul(so, so);
	return (p & 1) ? mul(so, vec) : so;

}

void solve() {
	int n; cin >> n;
	// vector<vector<int>> dp(n + 1, vector<int>(4, 0));

	// dp[1]=dp[2]+dp[3]+dp[4]
	// dp[2]=dp[1]+dp[3]+dp[4]
	// dp[3]=dp[1]+dp[2]+dp[4]
	// dp[4]=dp[1]+dp[2]+dp[3]

	// Binary Exponentiation
	// 4*1 = 4*4 x 4*1

	vector<int> initial({0, 0, 0, 1});

	vector<vector<int>> coff(4, vector<int>(4));
	coff[0] = {0, 1, 1, 1};
	coff[1] = {1, 0, 1, 1};
	coff[2] = {1, 1, 0, 1};
	coff[3] = {1, 1, 1, 0};

	vector<vector<int>> ans = binary_exponentiation(coff, n);

	// ans = coff ^ n
	// final_ans=ans(4*4) x intial(4*1);

	vector<int> final_ans(4, 0);
	for (int i = 0; i < 4; i++) {
		int tmp = 0;
		for (int k = 0; k < 4; k++) {
			tmp = (tmp + 1LL * ans[i][k] * initial[k]) % mod;
		}
		final_ans[i] = tmp;
	}

	cout << final_ans[3] << endl;

	// vector<int> dp1(4);

	// // dp[0][3] = 1;

	// dp1[3] = 1;

	// for (int i = 0; i < n; i++) {
	// 	vector<int> tmp(4);
	// 	for (int j = 0; j < 4; j++) {
	// 		for (int k = 0; k < 4; k++) {
	// 			if (j == k) continue;
	// 			tmp[k] = (tmp[k] + dp1[j]) % mod;
	// 		}
	// 	}
	// 	dp1 = tmp;
	// }
	// cout << dp1[3] << endl;
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