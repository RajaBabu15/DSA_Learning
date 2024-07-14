#include<bits/stdc++.h>

using namespace std;

void solve() {
	map<int, int> mp; mp.clear();
	for (int i = 9; i >= 0; i--) mp[i] = 1;
	for (auto &[k, _] : mp) cout << k << " "; cout << endl;
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