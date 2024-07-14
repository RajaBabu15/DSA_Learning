#include<bits/stdc++.h>

using namespace std;

void solve() {
	string str; cin >> str; int n = str.size();
	int c0 = 0; for (auto &ele : str) if (ele == '0') c0++;
	c0 = min(c0, n - c0);
	if (c0 & 1) cout << "DA" << endl;
	else cout << "NET" << endl;
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