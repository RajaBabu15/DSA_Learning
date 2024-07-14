#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), x(n), vec; int ta, tx; int l = INT_MIN, r = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> ta >> tx; a[i] = ta, x[i] = tx;
		if (ta == 1) l = max(l, tx);
		else if (ta == 2) r = min(r, tx);
		else vec.push_back(tx);
	}
	int no = (r ) - (l ) + 1;
	for (auto &ele : vec) {
		if (l <= ele && ele <= r) no--;
	}
	cout << max(0, no) << endl;
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