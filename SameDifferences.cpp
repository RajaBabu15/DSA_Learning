#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n; cin >> n;
	vector<int> vec(n); for (auto &ele : vec) cin >> ele;
	for (int i = 0; i < n; i++) vec[i] = vec[i] - i - 1;
	sort(vec.begin(), vec.end());
	int ans = 0; int ele = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] == ele) c++;
		else ans += max(0ll, c * (c - 1) / 2), ele = vec[i], c = 1;
	}
	ans += max(0ll, c * (c - 1) / 2);
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