#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, k; cin >> n >> k;
	vector<pair<int, int>> mon(n);
	for (auto &ele : mon) cin >> ele.first; for (auto&ele : mon) cin >> ele.second, ele.second = abs(ele.second);
	sort(mon.begin(), mon.end(), [&](const pair<int, int> &a, const pair<int, int> &b) {
		return a.second < b.second;
	});
	// for (auto &[a, b] : mon) cout << "{" << a << "," << b << "} "; cout << endl;
	int x = 0, save = 0;
	if (mon[0].second == 0) {cout << "NO" << endl; return;}

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