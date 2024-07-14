#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	int fa = (k + 1) / 2, la = k / 2;
	for (int i = 0; i < n; i++) {
		int t = min(vec[i], fa);
		vec[i] -= t;
		fa -= t;
	}
	if (fa > 0) {cout << n << endl; return;}
	for (int i = n - 1; i >= 0; i--) {
		if (vec[i] == 0 && la > 0) {cout << n << endl; return;}
		int t = min(vec[i], la);
		vec[i] -= t;
		la -= t;
	}
	if (la > 0) {cout << n << endl; return;}
	int ans = 0;
	for (int i = 0; i < n; i++) if (vec[i] != 0) ans++;
	cout << n - ans << endl;
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