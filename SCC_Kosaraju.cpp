#include<bits/stdc++.h>

using namespace std;


/*
1
8 10
1 2
2 3
3 1
3 4
4 5
5 6
6 7
7 8
7 5
5 8
*/

void dfs(int V, vector<vector<int>> &adjlst, int start, vector<int> &visited, stack<int> &st) {
	visited[start] = 1;
	for (auto &ele : adjlst[start]) {
		if (!visited[ele]) {
			dfs(V, adjlst, ele, visited, st);
		}
	}
	st.push(start);
}

void dfs2(int V, vector<vector<int>> &adjlst, int start, vector<int> &visited, vector<int> &ans) {
	visited[start] = 1;
	ans.push_back(start);
	for (auto &ele : adjlst[start]) {
		if (!visited[ele]) {
			dfs2(V, adjlst, ele, visited, ans);
		}
	}
}


vector<vector<int>> SCC_Kosaraju(int V, vector<vector<int>> &adjlst) {
	// Step 1. Create the stack of vertices with finishing time: st.top().finish_time > all i.e [DFS with printing node after all traversal]
	// Step 2. Reverse the Graph
	// Step 3. Do the dfs according to the stack element

	vector<vector<int>> ans;

	// Step 1.
	stack<int> st;
	vector<int> vis(V, 0);
	for (int i = 0; i < V; i++) {
		if (!vis[i]) {
			dfs(V, adjlst, i, vis, st);
		}
	}

	// Step 2.
	vector<vector<int>> adjlstT(V);
	for (int i = 0; i < V; i++) {
		for (auto &ele : adjlst[i]) {
			// Original: i->ele
			// Modified: ele->i
			adjlstT[ele].push_back(i);
		}
	}

	// Step 3.
	fill(vis.begin(), vis.end(), 0);
	while (!st.empty()) {
		int t = st.top();
		st.pop();
		if (!vis[t]) {
			vector<int> scc_component;
			dfs2(V, adjlstT, t, vis, scc_component);
			ans.push_back(scc_component);
		}
	}

	return ans;
}

void solve() {
	int V, E; cin >> V >> E;
	vector<vector<int>> adjlst(V);
	int u, v;
	for (int i = 0; i < E; i++) {
		cin >> u >> v; // 1 based Indexing
		adjlst[u - 1].push_back(v - 1); //Indexing corrected KosaRaju is applicable of the directed graph
	}
	vector<vector<int>> ans = SCC_Kosaraju(V, adjlst);
	cout << "#" << ans.size() << endl;
	for (auto &ele : ans) {
		for (auto &e : ele) cout << e + 1 << " "; cout << endl;
	}
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