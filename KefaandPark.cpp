#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> cat;
vector<vector<int>> adjlst;
vector<int> vis;


int dfs(int node, int cnt) {
	// cout << node << " " << cnt << endl;
	if (cnt > m) return 0;
	vis[node] = 1;
	bool flag = false;
	int ans = 0;
	for (auto &ele : adjlst[node]) {
		if (vis[ele] == 0) {
			flag = true;
			ans += dfs(ele, cnt * cat[ele] + cat[ele]);
		}
	}
	if (flag == false)  {
		// cout << "LEAF:: " << node << " " << endl;
		return cnt <= m;
	}
	else {
		// cout << "NODE" << node << " " << ans << endl;
		return ans;
	}
}

void solve() {
	cin >> n >> m;
	cat.resize(n); for (auto &ele : cat) cin >> ele;
	adjlst.resize(n, vector<int>()); for (int i = 0; i < n - 1; i++) {int a, b; cin >> a >> b; adjlst[a - 1].push_back(b - 1); adjlst[b - 1].push_back(a - 1);}
	vis.resize(n, 0);

	int start = 0, cnt = cat[start];
	vis[start] = 1;
	int ans = dfs(start, cnt);

	cout << ans << endl;

}

signed main() {
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