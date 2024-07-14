#include<bits/stdc++.h>

using namespace std;

struct Node {

	int color; //0 = WHITE, 1 = GRAY, 2 = BLACK
	int pi; //parent of the this Node
	int val; // value of the node i.e 1,2,3,4,...
	int d, f; //Timestamp for the Node to discovery=d, timestamp to finish the traversal = f
	Node(int _color = 0, int _pi = -1, int _val = INT_MIN , int _d = INT_MIN, int _f = INT_MIN): color(_color), pi(_pi), val(_val), d(_d), f(_f) {}
};

void dfs_visit(int start, int &time, vector<Node*> &vertices, const vector<vector<int>> &adjlst) {
	time++;
	cout << start + 1 << " ";
	vertices[start]->d = time;
	vertices[start]->color = 1;
	for (auto &ele : adjlst[start]) {
		if (vertices[ele]->color == 0) {
			vertices[ele]->color = 1;
			vertices[ele]->pi = start + 1;
			dfs_visit(ele, time, vertices, adjlst);
		}
	}
	time++;
	vertices[start]->f = time;
	vertices[start] ->color = 2;
}


void dfs(int V, const vector<vector<int>> &adjlst) {
	vector<Node*> vertices(V);
	for (int i = 0; i < V; i++) {
		vertices[i] = new Node(0, -1, i + 1, -1, -1);
	}
	int time = 0;
	for (int i = 0; i < V; i++) if (vertices[i]->color == 0) dfs_visit(i, time, vertices, adjlst);
	cout << "\n[val,color,pi,d,f]" << endl;
	for (auto &ele : vertices) {
		cout << "[" << ele->val << "," << ele->color << "," << ele->pi << ",";
		cout << ele->d << "," << ele->f << "]" << endl;
	}
}

void solve() {
	int V, E; cin >> V >> E; //1 based Indexing
	vector<vector<int>> adjlst(V); //0 based indexing
	int u, v;
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		adjlst[u - 1].push_back(v - 1); //indexing fixed here
		adjlst[v - 1].push_back(u - 1);	//indexing fixed here
	}
	dfs(V, adjlst);
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