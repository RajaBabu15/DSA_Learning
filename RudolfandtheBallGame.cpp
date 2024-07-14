#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, x; cin >> n >> m >> x;
	vector<int> a(n, 0), b(n, 0);
	a[x - 1] = 1;
	while (m--) {
		int r; char ch; cin >> r >> ch; fill(b.begin(), b.end(), 0);
		for (int i = 0; i < n; i++) {
			if (!a[i]) continue;
			if (ch == '0' || ch == '?') b[(i + r) % n] = 1;
			if (ch == '1' || ch == '?') b[(i - r + n) % n] = 1;
		}
		a = b;
	}
	vector<int> ans;
	for (int i = 0; i < n; i++) if (a[i] == 1) ans.push_back(i + 1);
	cout << (int)ans.size() << endl;
	for (auto &ele : ans) cout << ele << " "; cout << endl;
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