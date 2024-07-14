#include<bits/stdc++.h>

using namespace std;

class Graph {
public:
	vector<vector<int>> adj;
	vector<bool> visited;
	Graph(int n) {
		adj.resize(n);
		visited.resize(n, false);
	}
	void addEdge(int u, int v, bool undirected = false) {
		adj[u].push_back(v);
		if (undirected) adj[v].push_back(u);
	}
	void dfs(int start) {
		for (auto &ele : adj) {
			for (auto &e : ele) cout << e << " ";
			cout << endl;
		}
		fill(visited.begin(), visited.end(), false);
		stack<int> s;
		s.push(start);
		while (!s.empty()) {
			int t = s.top();
			s.pop();
			cout << t << " ";
			visited[t] = true;
			for (auto &ele : adj[t])
				if (!visited[ele]) s.push(ele);
		}
		cout << endl;
	}
};

void solve() {
	Graph g(4);
	vector<pair<int, int>> vec = {{0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 3}, {3, 3}};
	for (auto &[a, b] : vec) g.addEdge(a, b);
	g.dfs(2);
}

int main() {
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