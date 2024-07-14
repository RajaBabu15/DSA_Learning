#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end()); for (auto &ele : vec) cout << ele << " "; cout << endl;
	for (int i = 1; i <= n; ++i) {
		if (vec[i] > i) {cout << "NO" << endl; return;}
	}
	cout << "YES" << endl;
}

signed main() {
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