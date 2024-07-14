#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	unordered_map<double, int> mp; int ans = 0; int tmp;
	for (int i = n - 1; i >= 0; i--) {
		ans += mp.count(3.0 / vec[i]);
		tmp = mp.count(1 - 1.0 / vec[i]);
		if (tmp > 0) mp[1 - 1.0 / vec[i]]++;
		else mp[1 - 1.0 / vec[i]] = 1;
	}
	// for (auto &[k, v] : mp) cout << "{" << k << ":" << v << "} "; cout << endl;
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