#include<bits/stdc++.h>

using namespace std;

void solve() {
	string a, b; cin >> a >> b;
	int n = a.size(), m = b.size();
	map<char, int> mp; mp.clear();
	for (int i = 0; i < m; i++) {
		if (!mp[b[i]]) mp[b[i]] = i + 1;
	}
	int mx =;
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