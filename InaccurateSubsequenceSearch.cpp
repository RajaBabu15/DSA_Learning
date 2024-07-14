#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(n); for (auto &ele : a) cin >> ele;
	vector<int> b(m); for (auto &ele : b) cin >> ele;
	sort(b.begin(), b.end());
	vector<int> be(1000000 + 1, 0);
	for (auto &ele : b) be[ele]++;
	int c = 0;
	for (int i = 0; i < m; i++) {
		if (be[a[i]] > 0) c++, be[a[i]]--;
	}
	int ans = 0;
	if (c >= k) ans++;
	for (int i = 1; i <= n - m; i++) {
		auto it = find(b.begin(), b.end(), a[i - 1]);
		if (it != b.end()) be[a[i - 1]]++, c--;
		it = find(b.begin(), b.end(), a[i + m - 1]);
		if (it != b.end() && be[a[i + m - 1]] > 0) be[a[i + m - 1]]--, c++;
		if (c >= k) ans++;
	}
	cout << ans << endl;
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