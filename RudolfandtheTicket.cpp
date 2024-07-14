#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> l(n); for (auto &ele : l) cin >> ele; sort(l.begin(), l.end());
	vector<int> r(m); for (auto &ele : r) cin >> ele; sort(r.begin(), r.end());
	int ans = 0;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (l[i] + r[j] <= k) ans++;
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