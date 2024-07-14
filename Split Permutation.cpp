#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> vec(n);
	if (n & 1) {
		int cnt = 1, c = n - 1;
		for (int i = 0; i < n; i++) {
			if (i & 1) vec[i] = c, c--;
			else vec[i] = cnt, cnt++;
		}
		vec[n - 1] = n;
	}
	else {
		int c = 1, c2 = n;
		for (int i = 0; i < n; i++) {
			if (i & 1) vec[i] = c2, c2--;
			else vec[i] = c, c++;
		}
	}
	for (auto &ele : vec) cout << ele << " "; cout << endl;
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