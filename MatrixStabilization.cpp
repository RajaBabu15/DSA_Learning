#include<bits/stdc++.h>

using namespace std;

bool check(const vector<vector<int>> &vec, int i, int j, int n, int m) {
	return (i - 1 >= 0 ? vec[i][j] > vec[i - 1][j] : true)  && (i + 1 < n ? vec[i][j] > vec[i + 1][j] : true) && (j - 1 >= 0 ? vec[i][j] > vec[i][j - 1] : true) && (j + 1 < m ? vec[i][j] > vec[i][j + 1] : true);
}

int get(const vector<vector<int>> &vec, int i, int j, int n, int m) {
	int mx = INT_MIN;
	if (i - 1 >= 0) mx = max(vec[i - 1][j], mx);
	if (i + 1 < n) mx = max(mx, vec[i + 1][j]);
	if (j - 1 >= 0) mx = max(mx, vec[i][j - 1]);
	if (j + 1 < m) mx = max(mx, vec[i][j + 1]);
	return mx;
}




void solve() {
	int n, m; cin >> n >> m;
	vector<vector<int>> vec(n, vector<int>(m)); for (auto &ele : vec) for (auto &e : ele) cin >> e;
	vector<pair<int, int>> ij;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (check(vec, i, j, n, m)) ij.push_back({i, j});
		}
	}
	for (auto &ele : ij) {
		int i = ele.first, j = ele.second;
		while (check(vec, i, j, n, m) != false) {
			vec[i][j] = get(vec, i, j, n, m);
		}
	}

	for (auto &ele : vec) {
		for (auto &e : ele) {
			cout << e << " ";
		}
		cout << endl;
	}

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