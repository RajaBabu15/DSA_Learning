#include<bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int a, b, m; cin >> a >> b >> m;
	cout << (m + a ) / a + (m + b ) / b << endl;
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