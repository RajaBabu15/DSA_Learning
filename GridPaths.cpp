#include<bits/stdc++.h>

using namespace std;

#define int long long

/*
@brief	calculate the number of ways to get from the (x,y) to (xd,yd) using the vec matrix
		'.' is path and '*' is trap
		only allowed move are right and down
@return number of ways % 1000000007
*/

int dpfunc(int x, int y, int xd, int yd, const vector<vector<char>> &vec, vector<vector<int>> &dp) {
	if (x > xd || y > yd) return 0;
	if (dp[x][y] != -1) return dp[x][y];
	if (vec[x][y] == '*') return dp[x][y] = 0;
	int ans = 0;
	ans = (ans + dpfunc(x + 1, y, xd, yd, vec, dp)) % 1000000007;
	ans = (ans + dpfunc(x, y + 1, xd, yd, vec, dp)) % 1000000007;
	if (x == xd && y == yd) return dp[x][y] = 1;
	return dp[x][y] = ans;

}

void solve() {
	int n; cin >> n;
	vector<vector<char>> vec(n, vector<char>(n, 'a'));
	for (auto &ele : vec) for (auto &e : ele) cin >> e;
	vector<vector<int>> dp(n, vector<int>(n, -1));
	dpfunc(0, 0, n - 1, n - 1, vec, dp);  //dp = dpfunc;
	cout << dp[0][0] << endl;
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