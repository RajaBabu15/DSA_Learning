#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &ele : a) cin >> ele;
	for (auto &ele : b) cin >> ele;
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	vector<int> ans(n);
	for (int i = 0; i < n; i++) ans[i] = b[i];
	for (int i = n - 1, l = m - 1; i >= 0; i--, l--) {
		if (abs(ans[i] - a[i]) < abs(a[i] - b[l])) ans[i] = b[l];
	}
	long long an1 = 0ll;
	for (int i = 0; i < n; i++) an1 += abs(a[i] - ans[i]);
	cout << an1 << endl;

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