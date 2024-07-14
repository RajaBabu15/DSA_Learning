#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int w, h; cin >> w >> h;
	int ans = LLONG_MIN;
	for (int i = 0; i < 2; i++) {
		int k; cin >> k;
		vector<int> vec(k); for (auto &ele : vec) cin >> ele;
		sort(vec.begin(), vec.end());
		ans = max(ans, h * (vec[k - 1] - vec[0]));
	}
	for (int i = 0; i < 2; i++) {
		int k; cin >> k;
		vector<int> vec(k); for (auto &ele : vec) cin >> ele;
		sort(vec.begin(), vec.end());
		ans = max(ans, w * (vec[k - 1] - vec[0]));
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