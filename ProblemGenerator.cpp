#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> vec(7, 0);
	string str; cin >> str;
	for (auto &c : str) vec[c - 'A']++;
	int ans = 0;
	for (auto &ele : vec) ans += max(0, m - ele);
	cout << ans << endl;
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