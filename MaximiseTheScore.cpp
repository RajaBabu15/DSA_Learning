#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n << 1); for (auto &ele : vec) cin >> ele;
	sort(vec.begin(), vec.end());
	int ans = 0;
	for (int i = 2 * n - 1; i >= 0; i -= 2) ans += vec[i - 1];
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