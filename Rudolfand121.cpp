#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n); for (auto &ele : a) cin >> ele;
	for (int i = 0; i < n - 2; i++) {
		if (a[i] < 0) {cout << "NO" << endl; return;}
		else a[i + 1] -= a[i] << 1, a[i + 2] -= a[i], a[i] = 0;
	}
	for (int i = n - 1; i >= 0; i--) if (a[i] != 0) {cout << "NO" << endl; return;}
	cout << "YES" << endl;
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