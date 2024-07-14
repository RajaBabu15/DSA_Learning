#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;
	vector<int> a(n); for (auto &ele : a) cin >> ele;
	vector<int> b(m); for (auto &ele : b) cin >> ele;
	vector<int> t(1e6 + 1, 0), td(1e6 + 1, 0); for (auto &ele : b) t[ele]++, td[ele] = 1;
	int c = 0;
	for (int i = 0; i < m; i++) if (t[a[i]] > 0) c++, t[a[i]]--;
	int ans = 0;
	//Todo
	cout << 0 << " " << c << "    " << endl;
	if (c >= k) ans++;
	for (int i = m; i < n; i++) {
		if (td[a[i - m]]) t[a[i - m]]++, c--;
		if (t[a[i]]) c++, t[a[i]]--;
		//Todo
		cout << i - m + 1 << " " << c << "    " << endl;
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