#include<bits/stdc++.h>

using namespace std;

struct G {
	vector<vector<int>> adj;
	vector<bool> vis;
	G(int n): adj(n, vector<int>(n, 1)), vis(n, false) {}
};

void dfs(int _c, int _p, G &g) {
	g.adj[0][1] = 5;
}

void solve() {
	int n; cin >> n;
	G g(n);
	auto &adj = g.adj;
	for (auto &ele : adj) {
		for (auto &e : ele) cout << e << " "; cout << endl;
	}
	adj[0][0] = 0;
	dfs(0, -1, g);
	for (auto &ele : adj) {
		for (auto &e : ele) cout << e << " "; cout << endl;
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