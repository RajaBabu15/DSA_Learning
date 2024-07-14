#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj, re_rooted_lvl;
vector<int> par, lvl;

void dfs1(int node, int p, int l) {
	par[node] = p;
	lvl[node] = 1;
	for (auto &ele : adj[node])
		if (ele != p)
			dfs1(ele, node, l + 1), lvl[node] = max(lvl[node], lvl[ele] + 1);

}

void dfs2(int node, int p, vector<int> lvl11) {
	vector<int> lvl1;
	for (auto &ele : adj[node]) {
		if (ele != p) {
			lvl1 = lvl11;
			lvl1[node] = 1;
			for (auto &e : adj[node]) if (e != ele) lvl1[node] = max(lvl1[node], lvl1[e] + 1);
			lvl1[ele] = 1;
			for (auto &e : adj[ele]) lvl1[ele] = max(lvl1[ele], lvl1[e] + 1);
			re_rooted_lvl[ele] = lvl1;
			dfs2(ele, node, lvl1);
		}
	}
}

void solve() {
	int n; cin >> n;

	adj.clear(); adj.resize(n, vector<int>());
	for (int i = 0; i < n - 1; i++) {
		int u, v; cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	par.clear(); par.resize(n);
	lvl.clear(); lvl.resize(n);

	dfs1(0, -1, 0);

	for (auto &ele : lvl) cout << ele << " "; cout << endl << endl;

	re_rooted_lvl.clear(); re_rooted_lvl.resize(n);
	re_rooted_lvl[0] = lvl;

	dfs2(0, -1, lvl);


	for (int i = 0; i < n; i++) {
		vector<int> ele = re_rooted_lvl[i];
		cout << i + 1 << ":: ";
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