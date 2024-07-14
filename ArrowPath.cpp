#include<bits/stdc++.h>

using namespace std;

bool dfs(int x, int y, int ex, int ey, vector<vector<char>> &vec, int n) {
	if (y == n - 1) return true;
	else {
		if (vec[x][y + 1] == '>') dfs(x + 1,)
		}
}

void solve() {
	int n; cin >> n;
	string a, b; cin >> a >> b;
	vector<vector<char>> vec(2, vector<char>(n));
	for (int i = 0; i < n; i++) vec[0][i] = a[i], vec[1][i] = b[i];
	bool flag = dfs(0, 0, 1, n, vec, n);
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main() {
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