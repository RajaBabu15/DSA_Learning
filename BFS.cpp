#include<bits/stdc++.h>

using namespace std;

/*Input 1 when all vertices are reachable
1
8 10
1 2
1 3
3 4
4 5
4 6
5 7
5 6
6 7
6 8
7 8
1

Input 2 when the vertices number 8 is not reachable
1
8 8
1 2
1 3
3 4
4 5
4 6
5 7
5 6
6 7
1
*/

struct Node {
	int color; //0 = WHITE, 1 = GRAY, 2 = BLACK
	int d;     // distance from the source
	int pi;    //parent of the this Node
	int val;   // value of the node i.e 1,2,3,4,...
	Node(int _color = 0, int _d = INT_MAX, int _pi = -1, int _val = -1): color(_color), d(_d), pi(_pi), val(_val) {}
};

void solve() {
	int V, E; cin >> V >> E; //1 based indexing
	vector<vector<int>> adjlist(V); // 0 based indexing
	int u, v;
	for (int i = 0; i < E; i++) {
		cin >> u >> v;
		adjlist[u - 1].push_back(v - 1); //indexing fixed here
		adjlist[v - 1].push_back(u - 1); //indexing fixed here
	}
	vector<Node*> vertices(V);
	Node *tmp;
	for (int i = 0; i < V; i++) {
		tmp = new Node(0, INT_MAX, -1, i + 1);
		vertices[i] = tmp;
	}
	int s; cin >> s;
	s = s - 1;
	vertices[s]->color = 1; //Gray
	vertices[s]->d = 0; //distance
	vertices[s]->pi = -1; //parent
	queue<Node*> que;
	que.push(vertices[s]);
	while (!que.empty()) {
		tmp = que.front();
		que.pop();
		cout << tmp->val << " ";
		for (auto &ele : adjlist[tmp->val - 1]) {
			if (vertices[ele]->color == 0) {
				vertices[ele]->color = 1;
				vertices[ele]->d = tmp->d + 1;
				vertices[ele]->pi = tmp->val;
				que.push(vertices[ele]);
			}
		}
		vertices[tmp->val - 1]->color = 2;
	}
	cout << endl << "[val,col,dis,pi]" << endl;
	for (auto ele : vertices) {
		cout << "[" << ele->val << "," << ele->color << "," << ele->d << "," << ele->pi << "]" << endl;
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
