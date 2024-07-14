#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> par, degree;

void dfs_par(int node, int p) {
	par[node] = p;
	for (auto &neighbours : adj[node]) {
		if (neighbours != p) {
			dfs_par(neighbours, node);
		}
	}
}

void solve() {
	int n; cin >> n;
	vector<int> a(n); for (auto &ele : a) cin >> ele;

	adj.clear(); adj.resize(n, vector<int>());
	adj.clear(); degree.resize(n, 0); for (auto &ele : degree) ele = 0;
	for (int i = 0; i < n - 1; i++) {
		int u, v; cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		degree[u]++, degree[v]++;
	}

	vector<pair<int, int>> dpp(n - 1);
	for (int i = 1; i < n; i++) dpp[i - 1] = {i, degree[i]};

	sort(dpp.begin(), dpp.end(), [](const pair<int, int> &a, const pair<int, int> &b) {return a.second < b.second;});

	par.clear(); par.resize(n, -1);
	int start = 0;
	dfs_par(start, -1);

	vector<int> ans;

	for (auto &ele : dpp) {
		int node = ele.first, deg = degree[node];
		if (deg == 0) continue;
		if (deg == 1) {
			ans.push_back(node);
			int parent = par[node];
			degree[node]--;
			degree[parent]--;
		}
	}

	cout << ans.size() << endl;
	if (ans.size() != 0) for (auto &ele : ans) cout << ele + 1 << " "; cout << endl;
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