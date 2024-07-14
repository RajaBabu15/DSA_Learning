#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, q; cin >> n >> q;
	vector<int> vec(n), p(n, 0);
	for (int i = 0, ele; i < n && cin >> ele; i++) {
		vec[i] = ele;
		if (i != 0)
			p[i] = p[i - 1] + vec[i - 1];
	}
	int ts = p[n - 1] + vec[n - 1];
	for (int i = 0; i < q; i++) {
		int l, r, k; cin >> l >> r >> k;
		int re = ts - p[r - 1] - vec[r - 1] + p[l - 1] + k * (r - l + 1);
		cout << (re & 1 ? "YES" : "NO") << endl;
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