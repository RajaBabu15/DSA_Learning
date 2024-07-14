#include<bits/stdc++.h>

using namespace std;

struct G {
	vector<vector<int>> adj;
	vector<vector<bool>> vis;
	G(int n, int m): adj(n, vector<int>(m)), vis(n, vector<bool>(m, false))
	{

	}
};

int dfs(int i, int j, int n, int m, G &g, int _val) {
	g.vis[i][j] = true;
	g.adj[i][j] = _val;
	int ans = 1;
	if (i - 1 >= 0 && g.adj[i - 1][j] == 1 && g.vis[i - 1][j] == false)ans += dfs(i - 1, j, n, m, g, _val);
	if (i + 1 < n && g.adj[i + 1][j] == 1 && g.vis[i + 1][j] == false)ans += dfs(i + 1, j, n, m, g, _val);
	if (j - 1 >= 0 && g.adj[i][j - 1] == 1 && g.vis[i][j - 1] == false)ans += dfs(i, j - 1, n, m, g, _val);
	if (j + 1 < m && g.adj[i][j + 1] == 1 && g.vis[i][j + 1] == false)ans += dfs(i, j + 1, n, m, g, _val);
	return ans;
}

void solve() {
	srand(time(0));
	int n = rand() % 100, m = rand() % 100;
	G g(n, m);
	for (auto &ele : g.adj) for (auto &e : ele) e = rand() % 2;
	int mx = 0; int _val = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (g.adj[i][j] == 1 && g.vis[i][j] == false) {
				mx = max(mx, dfs(i, j, n, m, g, ++_val));
			}
		}
	}
	cout << mx << endl;


	cout << "Graph:" << n << "x" << m << endl;
	for (auto &ele : g.adj) {
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