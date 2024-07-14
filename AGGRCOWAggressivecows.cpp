#include<bits/stdc++.h>

using namespace std;

bool isPossible(vector<int> &vec, int space, int cow) {
	int _curr = 1;
	int last = vec[0];
	for (int i = 1; i < vec.size(); i++) {
		if (vec[i] - last >= space) {
			last = vec[i];
			_curr++;
		}
	}
	// cout << space << " " << _curr << " " << cow << " " << (_curr >= cow ? "true" : "false") << endl;
	return _curr >= cow;
}

void solve() {
	int n, c; cin >> n >> c;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int s = 1, e = vec[n - 1] - vec[0];
	int ans = -1;
	while (s <= e) {
		int m = (s + e) / 2;
		if (isPossible(vec, m, c)) {
			s = m + 1;
			ans = m;
		}
		else {
			e = m - 1;
		}
	}
	cout << ans << endl;
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