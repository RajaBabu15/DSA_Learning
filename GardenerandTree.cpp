#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<vector<int>> adj;
vector<int> indegree;
vector<int> vis;

void solve() {
	cin >> n >> k;
	indegree.resize(n + 1, 0);
	adj.resize(n + 1, vector<int>());
	for (int i = 0; i < n - 1; i++) {
		int a, b; cin >> a >> b;
		adj[a].push_back(b); adj[b].push_back(a);
		indegree[a]++, indegree[b]++;
	}
	tmp.resize(n + 1, 0);

	int start = 1;

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